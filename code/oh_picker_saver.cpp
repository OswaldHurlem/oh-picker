namespace OH { namespace picker {

enum QSV : u4t {
    QSV_JustAPng = 0,
    QSV_Initial = 1,
    QSV_LatestPlusOne,
};

// Loosely follows https://yave.handmade.network/blogs/p/2723-how_media_molecule_does_serialization
// Trad lbp serialization writes to a file but we write to a memory arena
// for LodePNG compatability
struct qsaver {
    u4t DataVersion;
    mem_arena Arena;
    blt IsWriting;
};

OH_INTERN void InitQSaver(qsaver* QS, blt IsWriting) {
    // TODO this isn't great
    u4t ArenaSize = OH_MEGAS(100); // 100MB = 10K-by-10K noise *shrug*
    AllocAndInitArena(&QS->Arena, ArenaSize, true);

    QS->IsWriting = IsWriting;
    QS->DataVersion = QSV_LatestPlusOne - 1;        
}

#define QSAPUSH(_type) OH_ARENA_PUSH(QS->Arena, _type)

#define OH_IMPL_EZ_QSAVE_FUNC(_type)                                       \
    OH_INLINE void QSave(qsaver* QS, _type* Datum) {                       \
        if (QS->IsWriting) { *OH_ARENA_PUSH(&QS->Arena, _type) = *Datum; } \
        else { *Datum = *OH_ARENA_PUSH(&QS->Arena, _type); }               \
    }

OH_IMPL_EZ_QSAVE_FUNC(char)
OH_IMPL_EZ_QSAVE_FUNC(u1t)
OH_IMPL_EZ_QSAVE_FUNC(i1t)
OH_IMPL_EZ_QSAVE_FUNC(u2t)
OH_IMPL_EZ_QSAVE_FUNC(i2t)
OH_IMPL_EZ_QSAVE_FUNC(u4t)
OH_IMPL_EZ_QSAVE_FUNC(i4t)
OH_IMPL_EZ_QSAVE_FUNC(i8t)
OH_IMPL_EZ_QSAVE_FUNC(u8t)
OH_IMPL_EZ_QSAVE_FUNC(f4t)
OH_IMPL_EZ_QSAVE_FUNC(f8t)
OH_IMPL_EZ_QSAVE_FUNC(blt)

// TODO can cog this
OH_IMPL_EZ_QSAVE_FUNC(u1t_2)
OH_IMPL_EZ_QSAVE_FUNC(u1t_3)
OH_IMPL_EZ_QSAVE_FUNC(u1t_4)
OH_IMPL_EZ_QSAVE_FUNC(i4t_2)
OH_IMPL_EZ_QSAVE_FUNC(i4t_3)
OH_IMPL_EZ_QSAVE_FUNC(i4t_4)
OH_IMPL_EZ_QSAVE_FUNC(f4t_2)
OH_IMPL_EZ_QSAVE_FUNC(f4t_3)
OH_IMPL_EZ_QSAVE_FUNC(f4t_4)
OH_IMPL_EZ_QSAVE_FUNC(f8t_2)
OH_IMPL_EZ_QSAVE_FUNC(f8t_3)
OH_IMPL_EZ_QSAVE_FUNC(f8t_4)
OH_IMPL_EZ_QSAVE_FUNC(blt_2)
OH_IMPL_EZ_QSAVE_FUNC(blt_3)
OH_IMPL_EZ_QSAVE_FUNC(blt_4)

OH_INTERN void PaletteTreeDummyData(palette_tree* PalTree)
{
    palette_node* Root       = PalTree->Nodes + 0;
    palette_node* Transform1 = PalTree->Nodes + 1;
    palette_node* Color1   = PalTree->Nodes + 2;

    Root->ChildIdxs.push_back((u4t)(Transform1 - PalTree->Nodes));

    Transform1->Type = NodeType_Transform;
    Transform1->Tf.Displace = MkF4t_3(0.0f, 50.0f, 0.0f);
    bx::snprintf(Transform1->Name, sizeof(Transform1->Name), "Transform1");
    Transform1->ChildIdxs.push_back((u4t)(Color1 - PalTree->Nodes));

    Color1->Type = NodeType_Color;
    Color1->Tf.Displace = MkF4t_3(0.0f, 0.0f, 0.0f);
    bx::snprintf(Color1->Name, sizeof(Color1->Name), "Color1");
};

#define OH_QS_ADD(_fieldAdded, _fieldName) do{ \
    if (QS->DataVersion >= (_fieldAdded)) {    \
        QSave(QS, &(Datum->_fieldName));   \
    } } while (false)

#define OH_QS_ADD_ARRAY(_fieldAdded, _arrayFieldName, _arrayCount) do{ \
    if (QS->DataVersion >= (_fieldAdded)) {                            \
        OH_FOR_COUNT(Idx, _arrayCount) {                               \
            QSave(QS, Datum->_arrayFieldName + Idx);                        \
        }                                                              \
    } } while(false)

#define OH_QS_REM(_fieldAdded, _fieldRemoved, _type, _fieldName, _defaultValue) do{ \
    _type _fieldName = (_defaultValue);                                             \
    if (QS->DataVersion >= (_fieldAdded) && QS->DataVersion < (_fieldRemoved)) {    \
        QSave(QS, &(_fieldName));                                               \
    } } while(false)

// Serialize string until null character is hit
OH_INTERN void QSaveStrBuff(qsaver* QS, str Datum, u4t StrBuffLen)
{
    OH_FOR_COUNT(Idx, StrBuffLen) {
        QSave(QS, (char*)(Datum + Idx));
        if (!Datum[Idx]) { break; }
    }
}

OH_IMPL_EZ_QSAVE_FUNC(palette_node_type)

OH_INTERN void QSave(qsaver* QS, transform_3d* Datum) {
    OH_QS_ADD(0, Displace);
    OH_QS_ADD(0, Rotation);
    OH_QS_ADD(0, Scale);
}

OH_INTERN void QSave(qsaver* QS, tinystl::vector<u4t>* Datum)
{
    u4t VectorCount = (u4t)Datum->size();
    QSave(QS, &VectorCount);
    Datum->resize(VectorCount);
    u4t* Array = Datum->data();

    OH_FOR_COUNT(Idx, VectorCount) {
        QSave(QS, Array + Idx);
    }
}

OH_INTERN void QSave(qsaver* QS, palette_node* Datum)
{
    OH_QS_ADD(0, Type);

    if (Datum->Type != NodeType_Free) {
        QSaveStrBuff(QS, Datum->Name, OH_COUNTOF(Datum->Name));
        OH_QS_ADD(0, Tf);
        OH_QS_ADD(0, ChildIdxs);
    }
}


OH_INTERN void QSavePaletteTree(qsaver* QS, palette_tree* Datum, u4t PaletteCount) {
    // TODO compact data so that not so many free nodes get written
    OH_QS_ADD_ARRAY(0, Nodes, OH_COUNTOF(Datum->Nodes));
    OH_QS_ADD_ARRAY(0, AssignedColorNodeIdxs, PaletteCount);

    OH_FOR_COUNT(Idx, PaletteCount)
    {
        QSaveStrBuff(QS, Datum->SlotNames[Idx], OH_COUNTOF(Datum->SlotNames[Idx]));
    }
}

// Serilaization point of entry!!
// Writing Conditions = { Pre: (Empty Arena), Post: (Arena->MemPtr->data == PngBinary & Arena->Used == FileSize) }
// Reading Condtions  = { Pre: (Arena->MemPtr->data == PngBinary & Arena->Used == FileSize), Post: () }
// Assumes Base64 string is null-terminated... hmm
OH_INTERN void QSave(qsaver* QS, app_state_saveable* Datum)
{
    mem_arena* const Arena = &QS->Arena;

    if (QS->IsWriting)
    {
        QSave(QS, &QS->DataVersion);
        QSavePaletteTree(QS, &Datum->PalTree, Datum->IndexedImage.PaletteCount);

        u4t MetaSize = Arena->Used;
        u4t Base64StrLen = BASE64_DECODE_OUT_SIZE(MetaSize);
        char* Base64Str = OH_ARENA_PUSH_N(Arena, char, Base64StrLen);
        Arena->Used = 0;
        u1t* MetaData = OH_ARENA_PUSH_N(Arena, u1t, 0);
        i4t Result = base64_encode(MetaData, MetaSize, Base64Str);
        OH_CHECK(Result == BASE64_OK, "Base64 failed");

        memptr PngMemory = NULL;

        if (QS->DataVersion > QSV_JustAPng) {
            SaveIndexedPngToMemory(&PngMemory, &Datum->IndexedImage, (str)Base64Str);
        }
        else { SaveIndexedPngToMemory(&PngMemory, &Datum->IndexedImage, Base64Str); }

        // Copy PngMemory to start of memory arena (goofy I know)
        MemCpy(Arena->MemPtr->data, PngMemory->data, PngMemory->size);
        OH_ARENA_PUSH_N(Arena, u1t, PngMemory->size);
        MemPtrFree(PngMemory);
    }
    else
    {
        str Base64Str = NULL;
        memptr PngMemory = MemPtrToUsed(Arena);
        LoadIndexedPngFromMemory(&Datum->IndexedImage, &Base64Str, PngMemory);

        if (Base64Str) {
            u4t Base64StrLen = StrLen(Base64Str);
            // Copy decoded Metadata to start of arena (goofy I know)
            Arena->Used = 0;
            u1t* MetaData = OH_ARENA_PUSH_N(Arena, u1t, 0);
            i4t Result = base64_decode(Base64Str, Base64StrLen, MetaData);
            OH_CHECK(Result == BASE64_OK, "Base64 failed");
            QSave(QS, &QS->DataVersion);
            QSavePaletteTree(QS, &Datum->PalTree, Datum->IndexedImage.PaletteCount);
            FreePngMetadataStr(Base64Str);
        }
        else {
            QS->DataVersion = 0;
            MemClear(&Datum->PalTree, sizeof(Datum->PalTree));
            InitPaletteTree(&Datum->PalTree);
            GiveColorNodesToMatchImage(&Datum->PalTree, &Datum->IndexedImage);
        }
    }
};

OH_INTERN blt QSave_File(str FilePath, app_state_saveable* Datum, blt IsWriting)
{
    OH_CHECK(Datum != NULL, "App state can't be null");

    qsaver QS;
    InitQSaver(&QS, IsWriting);
    mem_arena* const Arena = &QS.Arena;

    if (QS.IsWriting) {
        bx::FileWriterI* Writer = entry::getFileWriter();

        if (bx::open(Writer, FilePath))        {
            QSave(&QS, Datum);
            OH_CHECK(Arena->Used, "Eyy");
            bx::Error Err = {};
            bx::write(Writer, Arena->MemPtr->data, Arena->Used, &Err);
            OH_UNUSED(Err); // TODO
            bx::close(Writer);
        }
        else { OH_CHECK(0, "!!!"); }
    }
    else {
        bx::FileReaderI* Reader = entry::getFileReader();

        if (bx::open(Reader, FilePath)) {
            u4t FileSize = (u4t)bx::getSize(Reader);
            OH_ARENA_PUSH_N(Arena, u1t, FileSize);
            bx::Error Err = {};
            bx::read(Reader, Arena->MemPtr->data, Arena->Used, &Err);
            OH_UNUSED(Err); // TODO
            bx::close(Reader);
            QSave(&QS, Datum);
        }
        else { OH_CHECK(0, "!!!"); }
    }
    ArenaFree(Arena);
    return true;
}

} }
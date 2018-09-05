#pragma once
namespace OH {

#define OH_ARENA_PUSH(_Arena, _type) ((_type*)PushSize_(_Arena, sizeof(_type)))
#define OH_ARENA_PUSH_N(_Arena, _type, _Count) ((_type*)PushSize_(_Arena, (_Count)*sizeof(_type)))

// MAYBE alignment
struct mem_arena {
    memptr MemPtr;
    u4t Used;
};

OH_INLINE void AllocAndInitArena(mem_arena* Arena, u4t Size, blt Clear) {
    Arena->MemPtr = MemPtrAlloc(Size);
    Arena->Used = 0;
    if (Clear) { MemPtrClear(Arena->MemPtr); }
}

OH_INLINE void* PushSize_(mem_arena* Arena, upt ObjSize) {
    void* Result = Arena->MemPtr->data + Arena->Used;
    OH_CHECK((Arena->Used + ObjSize) <= Arena->MemPtr->size, "Memory arena is full");
    Arena->Used += (u4t)ObjSize;
    return Result;
}

/*OH_INLINE void* PushMax(mem_arena* Arena, upt* ObjSize) {
    *ObjSize = (upt)(Arena->MemPtr->size - Arena->Used);
    void* Result = Arena->MemPtr->data + Arena->Used;
    Arena->Used = Arena->MemPtr->size;
    return Result;
}*/

OH_INLINE void ArenaFree(const mem_arena* Arena) {
    OH_CHECK(Arena->MemPtr != NULL, "MemPtr is null");
    MemPtrFree(Arena->MemPtr);
}

OH_INLINE void ArenaClearContents(const mem_arena* Arena) {
    MemPtrClear(Arena->MemPtr);
}

// NOTE This makes a memptr which is not freed with MemPtrFree and is therefore DANGEROUSLY HOT
OH_INLINE memptr MemPtrToUsed(mem_arena* Arena) {
    u4t MemPtrSize = Arena->Used;
    bgfx::Memory* MemPtr = OH_ARENA_PUSH(Arena, bgfx::Memory);
    MemPtr->data = Arena->MemPtr->data;
    MemPtr->size = MemPtrSize;
    return MemPtr;
}


// MAYBE add allocator field
/*<<<
def out_simple_list(typename):
    idt_out(f'struct {typename}_buff')
    with cog_brace(sc = True):
        idt_out(f'mem_arena Arena;')
        idt_out('')
        idt_out(f'OH_INLINE {typename}* B()')
        with cog_brace():
            idt_out(f'return ({typename}*)Arena.MemPtr->data;')
        idt_out('')
        idt_out('OH_INLINE u4t Used()')
        with cog_brace():
            idt_out(f'return this->Arena.Used/sizeof({typename});')
        idt_out('')
        idt_out('OH_INLINE void SetUsed(u4t N)')
        with cog_brace():
            idt_out(f'this->Arena.Used = N*sizeof({typename});')
        idt_out('OH_INLINE u4t Capacity()')
        with cog_brace():
            idt_out(f'return this->Arena.MemPtr->size/sizeof({typename});')
        idt_out('')
        idt_out(f'OH_INLINE {typename}* Push()')
        with cog_brace():
            idt_out(f'return OH_ARENA_PUSH(&this->Arena, {typename});')
        idt_out('')
        idt_out('OH_INLINE void AllocAndInit(u4t Capacity, blt Clear)')
        with cog_brace():
            idt_out(f'AllocAndInitArena(&this->Arena, Capacity*sizeof({typename}), Clear);')
        idt_out('OH_INLINE void Free()')
        with cog_brace():
            idt_out('ArenaFree(&this->Arena);')
        idt_out('OH_INLINE void ClearContents()')
        with cog_brace():
            idt_out(f'ArenaClearContents(&this->Arena);')
    idt_out('')
>>>*/
//<<>> (checksum: d41d8cd98f00b204e9800998ecf8427e)

// namespace OH {
}
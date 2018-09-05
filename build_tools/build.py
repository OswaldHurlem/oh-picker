import os
import subprocess
import shutil
from oh_generate_vectors import write_vector_h
from contextlib import contextmanager
import sys
from oh_cog import Cog

def super_copytree(src, dst, symlinks=False, ignore=None):
    for item in os.listdir(src):
        s = os.path.join(src, item)
        d = os.path.join(dst, item)
        if os.path.isdir(s):
            shutil.copytree(s, d, symlinks, ignore)
        else:
            shutil.copy2(s, d)

#build_intermediate_path = 'build_intermediate'
build_dir = 'build'
vscmd_arch = 'amd64'
src_dir = 'code'
cpp_file = f'{src_dir}/oh_picker_bgfx.cpp'
exe_name = 'oh_picker_bgfx.exe'
ext_pkg_dir = 'ext_pkg'

#@contextmanager
#def pushd(new_dir):
#    previous_dir = os.getcwd()
#    os.chdir(new_dir)
#    yield
#    os.chdir(previous_dir)

cog_op = 'generate'
cog_arg = next((a for a in sys.argv if a.startswith('/cog')), None)

if cog_arg:
    cog_op = cog_arg.split('=')[1]

if cog_op != 'none':
    vector_filename = 'code/oh_generate_vectors.py.h'
    print(f'Generating {vector_filename}')
    write_vector_h(vector_filename, 'OH')
    print(f'Running Cog')
    cog_inst = Cog()
    cog_inst.options.bHashOutput = True
    cog_inst.options.bWarnEmpty = True
    cog_inst.options.bReplace = True
    cog_inst.options.sBeginSpec = '<<<'
    cog_inst.options.sEndSpec = '>>>'
    cog_inst.options.sEndOutput = '<<>>'
    cog_inst.options.validate()
    cog_inst._fixEndOutputPatterns()
    cogged_paths = [
        f'{src_dir}/oh_cog_header.cogh',
        f'{src_dir}/oh_embed_rsrc.h',
        f'{src_dir}/oh_generated_lists.h',
        f'{src_dir}/oh_ubershader.h',
        f'{src_dir}/oh_palette_gui.cpp',
    ]
    for cogged_path in cogged_paths:
        cog_inst.processOneFile(cogged_path)

msvc_mode = 'compile'
msvc_mode_arg = next((a for a in sys.argv if a.startswith('/msvc_mode')), None)

if msvc_mode_arg:
    msvc_mode = msvc_mode_arg.split('=')[1]

opt = 'd'
opt_arg = next((a for a in sys.argv if a.startswith('/opt')), None)

if opt_arg:
    opt = opt_arg.split('=')[1]

if "Get Visual Studio Cmd Vars with os.envion":
    print("Initializing vs vars", flush=True)
    vswhere_path = os.path.expandvars(r"%ProgramFiles(x86)%/Microsoft Visual Studio/Installer/vswhere.exe")
    if not os.path.exists(vswhere_path):
        raise EnvironmentError("vswhere.exe not found at: %s", vswhere_path)
    vs_dir = subprocess.check_output([vswhere_path, "-latest", "-property", "installationPath"], universal_newlines=True)
    vscmd_path = os.path.join(vs_dir.strip(), 'Common7/Tools/VSDevCmd.bat')

    env_list = subprocess.check_output(
        f'"{vscmd_path}" -arch={vscmd_arch} -host_arch={vscmd_arch} -no_logo && set',
        shell=True, universal_newlines=True)

    for line in env_list.splitlines():
        pair = line.split("=", 1)
        os.environ[pair[0]] = pair[1]

if "Build":
    if os.path.exists(build_dir):
        try:
            shutil.rmtree(build_dir)
            os.makedirs(build_dir)
        except Exception as e:
            print(f'Stopped by error: {e}. What a surprise...')

    # Compile
    # NOTE: BX has a lot of custom build mumbo jumbo in toolchain.lua
    # TODO: Get rid of obj, lib, exp, etc
    include_folders = [f'I{d}' for d in [
        'ext_code',
        'ext_code/bx/include',
        'ext_code/bx/include/compat/msvc',
        'ext_code/bx/3rdparty',
        'ext_code/bimg/include',
        'ext_code/bimg/3rdparty',
        'ext_code/bgfx/include',
        'ext_code/bgfx/3rdparty',
        'ext_code/bgfx/3rdparty/khronos',
        'ext_code/bgfx/3rdparty/dxsdk/include',
        ]] #???

    defines = [f'D{d}=v' for (d, v) in [
        ('__STDC_LIMIT_MACROS', 1),
        ('__STDC_FORMAT_MACROS', 1),
        ('__STDC_CONSTANT_MACROS', 1),
        ]]

    cl_args = []

    if msvc_mode == 'compile':
        compile_flags = ['MD', 'nologo', 'Gm-', 'GR-', 'WX',  'fp:fast',#'arch:AVX2',
            'EHsc', 'FC', 'Zi', 'Zo', #'showIncludes'
            ]
        
        o_flag = ''
        if opt == 'd':
            o_flag = 'Od'
        if opt == '2':
            o_flag = 'O2'

        exe_path_arg = 'Fe' + os.path.join(build_dir, exe_name)
        obj_path_arg = 'Fo' + os.path.join(build_dir, exe_name).replace('.exe', '.obj')
        pdb_path_arg = 'Fd' + os.path.join(build_dir, exe_name).replace('.exe', '.pdb')
        defines = [f'D{d}=v' for (d, v) in [
            ('__STDC_LIMIT_MACROS', 1),
            ('__STDC_FORMAT_MACROS', 1),
            ('__STDC_CONSTANT_MACROS', 1),
            ]]
        linker_flags = ['incremental:no', 'opt:ref', f'libpath:{ext_pkg_dir}'] # subsystem
        compile_args = [f'-{a}' for a in 
            include_folders
            + compile_flags
            + [o_flag, exe_path_arg, obj_path_arg, pdb_path_arg]
            + defines]
        cl_args =  compile_args + [cpp_file, '-link'] + [f'-{a}' for a in (linker_flags)]
        print("Compiling", flush=True)
    elif msvc_mode == 'cpp':
        i_path_arg = 'Fi' + os.path.join(build_dir, exe_name).replace('.exe', '.i')
        compile_args = [f'-{a}' for a in 
            include_folders
            + defines
            + [i_path_arg]]
        cl_args = compile_args + ['-P', '-P', '-C' , cpp_file]
        print(f'Running CPP ({cl_args})', flush=True)

    if not os.path.exists(build_dir):
        os.makedirs(build_dir)

    result = os.system('cl.exe ' + ' '.join(cl_args))
    print(f"Exited with code {result}", flush=True)

    if msvc_mode == 'compile':
        print('Copying contents of ' + ext_pkg_dir)
        super_copytree(ext_pkg_dir, build_dir)

#shutil.rmtree(build_intermediate_path)
project('Gadget2','c', version: '2.0.0',
    default_options: ['warning_level=3','optimization=3','buildtype=release'])

if get_option('buildtype')=='release'
    add_global_arguments('-Ofast',language: 'c')
    add_global_arguments('-DNDEBUG',language: 'c')
endif

subdir('include')
subdir('src')

cc=meson.get_compiler('c')
cmath=cc.find_library('m')
fftw = dependency('fftw')
mpi = dependency('mpi')
gsl = dependency('gsl')

_format = find_program('clang-format',required: false)

if (_format.found())
    run_target('format', command: [_format,'-i',gadget_headers,gadget_src])
endif

config = files(['config.h'])

gadget = executable('gadget2',gadget_src,gadget_headers,config,
    include_directories: gadget_include,
    dependencies: [cmath,fftw,gsl,mpi])

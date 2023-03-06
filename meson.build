#### setup inisial project ####

project('meson-cpp-tutorial', 'cpp',
  version : '0.0.1',
  default_options : ['warning_level=3','cc=clang','cxx=clang++','prefix=/usr/local','buildtype=debugoptimized','cpp_std=c++14'])

#
main_sources = []
header_sources = []
basic_sources =[]
oop_sources = []
# set directory

inc = include_directories('include')
subdir('include')
subdir('src')

subdir('third_party')

dir_base = meson.current_source_dir()
message(dir_base)

# custom add_languages for specific machine
if build_machine.system() == 'linux'
	add_languages('c')
endif

clangcpp = find_program('clang++')
clang    = find_program('clang')

if get_option('enable-tests')
	subdir('test')
endif
if get_option('enable-benchmarks')
	subdir('benchmarks')
endif

# setup documentation

pymod = import('python')
python3 = pymod.find_installation('python3', required: false)

if python3.found()
	python3_path = python3.get_variable('BINDIR') / python3.get_variable('PYTHON') + python3.language_version()

	sphinx = find_program('sphinx-build', 'sphinx-build-3', 'sphinx-build-' + python3.language_version(), required: false)

endif

if sphinx.found()
	subdir('docs')
endif


#### target executable ####
learncpp = executable('learncpp',
           main_sources,
  include_directories : inc,
  link_with:[basiclib,ooplib],
  install : true)

#### test #####
test('basic',learncpp)
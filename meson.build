# setup inisial project

project('meson-cpp-tutorial', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

main_sources = []


inc = include_directories('include')
subdir('include')
subdir('src')
subdir('benchmarks')
subdir('docs')
subdir('third_party')

# target executable
executable('learncpp',
           main_sources,
  include_directories : inc,
  link_with:mathlib,
  install : false)

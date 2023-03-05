main = files('main.cc')
main_sources += main

subdir('basic')
subdir('oop')

# library static basic
basiclib = static_library('basic',
	basic_sources,
	include_directories:inc)

# library static oop
ooplib = static_library('oop',
			oop,
			include_directories:inc,
			install:true)
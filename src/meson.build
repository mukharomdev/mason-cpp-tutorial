main = files('main.cc')
main_sources += main

aritmatik = files(['tambah.cc'])

mathlib = shared_library('libaritmatik',
			aritmatik,
			include_directories:inc,
			install:true)
project(etape2)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY})

add_executable (
	test_fsa
	main.cpp
	Machine.cpp
	Machine.hpp
)

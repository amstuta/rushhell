project(devil)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY})

add_executable (
	test_inspector
	devil.cpp
	Inspector.hpp
)

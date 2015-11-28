project(etape3)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY})

add_executable (
	test_dynamic_fsa
	main.cpp
	Edge.cpp
	State.cpp
	Matcher.cpp
	FSA.cpp
	Edge.hpp
	State.hpp
	Matcher.hpp
	FSA.hpp
)

project(etape1)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY})

add_executable (
	test_functor_type
	main.cpp
	FunctionSignature.hpp
)

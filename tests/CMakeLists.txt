message(STATUS "Generating tests")

# finds all .cpp files and stores them in variable TESTS_SOURCES
get_filename_component(TESTS_PATH "." ABSOLUTE)
file(GLOB_RECURSE TEST_SOURCES ${TESTS_PATH}/*.cpp)

# links the thing we are testing (compiler) and links all of the tests
# TODO: remake it at some point using external catch library
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests PRIVATE compiler)
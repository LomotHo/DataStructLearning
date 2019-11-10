cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

project(demo)

# add lib
find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# add module
add_subdirectory(dataStruct)

# test module
aux_source_directory(./test TEST_SRC)
add_executable(UNIT_TEST ${TEST_SRC})

# target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} DataStruct)
target_link_libraries(UNIT_TEST ${GTEST_BOTH_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT} DataStruct)
add_test(Test UNIT_TEST)
enable_testing()
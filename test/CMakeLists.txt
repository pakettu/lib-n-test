add_executable(test test.cpp)

target_link_libraries(test PRIVATE bitsetD)
target_include_directories(test PRIVATE doctest)
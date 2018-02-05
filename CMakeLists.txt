cmake_minimum_required(VERSION 3.2)
project(foo)

add_executable(foo foo.cpp)

add_subdirectory(third_party/a)
add_subdirectory(third_party/b)

target_link_libraries(foo PUBLIC a::a b::b)

enable_testing()
add_test(NAME foo COMMAND foo)

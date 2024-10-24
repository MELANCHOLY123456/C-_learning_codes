cmake_minimum_required(VERSION 3.29)
project(C___learning_codes)

set(CMAKE_CXX_STANDARD 17)

add_executable(C___learning_codes main.cpp)

add_executable(add_using Chapter_03/add_using.cpp)
add_executable(arrayScores Chapter_03/arrayScores.cpp)
add_executable(c_type Chapter_03/c_type.cpp)
add_executable(char_repl Chapter_03/char_repl.cpp)
add_executable(c_string Chapter_03/c_string_hdr.cpp)
add_executable(get_line Chapter_03/get_line.cpp)
add_executable(square Chapter_03/square.cpp)

add_executable(3.4 Chapter_03_exercises/3.4.cpp)
add_executable(3.5 Chapter_03_exercises/3.5.cpp)
add_executable(3.6 Chapter_03_exercises/3.6.cpp)
add_executable(3.10 Chapter_03_exercises/3.10.cpp)
add_executable(3.14 Chapter_03_exercises/3.14.cpp)

add_executable(capacity Chapter_09/capacity.cpp)
add_executable(erase01 Chapter_09/erase01.cpp)
add_executable(erase02 Chapter_09/erase02.cpp)
add_executable(erase03 Chapter_09/erase03.cpp)
add_executable(find_str Chapter_09/find_str.cpp)
add_executable(find_ops Chapter_09/find_ops.cpp)

add_executable(11.2 Chapter_11_exercises/11.2.cpp)
add_executable(11.3 Chapter_11_exercises/11.3.cpp)
add_executable(11.7 Chapter_11_exercises/11.7.cpp)
add_executable(vector_version Chapter_11_exercises/11.8/vector_version.cpp)
add_executable(set_version Chapter_11_exercises/11.8/set_version.cpp)
add_executable(11.9 Chapter_11_exercises/11.9.cpp)

add_executable(Trace Ruminations_on_C++/Trace.cpp)
add_executable(TestTrace Ruminations_on_C++/TestTrace.cpp)
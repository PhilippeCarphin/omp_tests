cmake_minimum_required(VERSION 3.10)

project(openmp_test C)

find_package(OpenMP REQUIRED)

message(STATUS "OpenMP_C_FLAGS = ${OpenMP_C_FLAGS}")

add_executable(main main.c)
target_link_libraries(main PUBLIC OpenMP::OpenMP_C)
# target_compile_options(main PUBLIC ${OpenMP_C_FLAGS})
# target_link_libraries(main PUBLIC ${OpenMP_C_LIBRARIES})

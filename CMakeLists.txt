cmake_minimum_required(VERSION 3.0.0)
project(project_jpo_1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(project_jpo_1 main.cpp calculator.cpp calculator.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

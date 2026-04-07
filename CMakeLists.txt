cmake_minimum_required(VERSION 3.0.0)
project(hello_window VERSION 1.0.0)
#политика cmake чтобы не выходила ошибка
cmake_policy(SET CMP0072 NEW)

#включить openGL
find_package(OpenGL REQUIRED)

#подключение файлов src
add_executable(hello_window 
    src/config.h
    src/main.cpp 
    src/glad.c
)

#подключение файла с dependencies/GLFW
target_include_directories(hello_window PRIVATE dependencies)

#подключение библиотеки glfw
target_link_libraries(hello_window glfw OpenGL::GL)
cmake_minimum_required(VERSION 3.0)
project(tetris_kmw)

add_executable(tetris_kmw src/main.c src/display_menu.c src/display_tetris.c)
target_include_directories(tetris_kmw PUBLIC include)

install(TARGETS tetris_kmw DESTINATION /usr/local/bin)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION /usr/local/include)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/ DESTINATION /usr/local/src)

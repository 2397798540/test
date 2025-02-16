cmake_minimum_required(VERSION 3.10)

# Set the project name
project(SnakeGame)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(SnakeGame
    src/main.cpp
    src/game.cpp
    src/snake.cpp
)

# Include directories
include_directories(src)
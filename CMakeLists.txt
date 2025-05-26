cmake_minimum_required(VERSION 3.28)
project(PacMan LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.1
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(PacMan
        src/main.cpp
        src/game.cpp
        src/player.cpp
        src/ghost.cpp
        src/map.cpp)

target_compile_features(PacMan PRIVATE cxx_std_17)
target_link_libraries(PacMan PRIVATE SFML::Graphics SFML::Audio)
target_include_directories(PacMan PRIVATE ${CMAKE_SOURCE_DIR}/src)

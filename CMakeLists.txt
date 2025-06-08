cmake_minimum_required(VERSION 3.20)
project(LittleSurvivor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add engine as a subdirectory (Git submodule)
add_subdirectory(LittleEngineOOP)

# Game sources
file(GLOB_RECURSE LITTLE_SURVIVOR_SRC CONFIGURE_DEPENDS
        Game/src/*.cpp
        Game/include/*.h
        Game/Main.cpp
)

add_executable(LittleSurvivor ${LITTLE_SURVIVOR_SRC})

# Set include path to find headers
target_include_directories(LittleSurvivor PRIVATE
        ${CMAKE_SOURCE_DIR}/Game/include
)

# Link against the engine
target_link_libraries(LittleSurvivor PRIVATE LittleEngine)
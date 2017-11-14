cmake_minimum_required(VERSION 3.8)
project(CMSC_178)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Lab1/main.cpp Lab1/PureTone.h Lab1/AudioFile.h Lab1/AudioFile.cpp Lab1/TuningSequence.h)
add_executable(CMSC_178 ${SOURCE_FILES})
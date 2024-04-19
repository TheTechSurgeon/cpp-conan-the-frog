cmake_minimum_required(VERSION 3.15)
project(frogbarian CXX)




add_library(frogbarian src/frogbarian.cpp)
target_include_directories(frogbarian PUBLIC include)



set_target_properties(frogbarian PROPERTIES PUBLIC_HEADER "include/frogbarian.h")
install(TARGETS frogbarian)

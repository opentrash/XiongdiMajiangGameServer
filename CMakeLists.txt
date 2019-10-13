cmake_minimum_required(VERSION 3.15)
project(XiongdiMajiangGameServer)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(deps EXCLUDE_FROM_ALL)

add_executable(mjd main.cpp sources/Tile.cpp sources/Tile.h sources/GlobalEnums.h sources/Room.cpp sources/Room.h sources/GlobalDefines.h sources/GlobalMaps.h)
target_link_libraries(mjd PRIVATE flatbuffers)

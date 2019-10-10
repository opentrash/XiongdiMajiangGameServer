cmake_minimum_required(VERSION 3.15)
project(XiongdiMajiangGameServer)

set(CMAKE_CXX_STANDARD 14)

add_executable(XiongdiMajiangGameServer main.cpp sources/Tile.cpp sources/Tile.h sources/GlobalEnums.h sources/Room.cpp sources/Room.h sources/GlobalDefines.h sources/GlobalMaps.h sources/utils.h sources/GameLobby.cpp sources/GameLobby.h)

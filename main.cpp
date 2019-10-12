#include <iostream>

#include "sources/GameLobby.h"
#include "sources/Room.h"

int main() {
    std::cout << "Game Server Starts." << std::endl;

    // simple test for now
    GameLobby lobby {};
    std::string rN = lobby.createRoom();
    if (rN == FAILED) {
        std::cout << "create room unsuccessfully !" << std::endl;
        return 0;
    }
    std::cout << "room number:" << rN << std::endl;

    Room& room = lobby.getRoom(rN);
    std::cout << "actual room number:" << room.roomNumber() << std::endl;

    return 0;
}
#include "sources/GameLobby.h"

int main() {
    std::cout << "Game Server Starts." << std::endl;

    // simple test for now
    GameLobby lobby {};
    int rN = lobby.createRoom();
    if (rN == FAILED) {
        std::cout << "create room unsuccessfully !" << std::endl;
        return 0;
    }
    std::cout << "room number:" << rN << std::endl;
    return 0;
}
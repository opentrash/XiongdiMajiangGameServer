//
// Created by haduluoke on 10/10/19.
//

#include "GameLobby.h"
#include "utils.h"

std::string GameLobby::createRoom() {
    const std::string rNumber = allocateRoomNumber();

    // NOTE: in case the lobby is full
    // TODO add no extra room catch
    if (addRoom(rNumber)) return rNumber;
    return FAILED;
}

bool GameLobby::addRoom(const std::string& rNumber) {
    if (roomCount >= ROOM_QUANTITY) return false;
    rooms[rNumber] = Room { rNumber };
    roomCount++;
    return true;
}

Room& GameLobby::getRoom(const std::string& rNumber) {
    return rooms.at(rNumber);
}

// alloc a room number which is not used
std::string GameLobby::allocateRoomNumber() {
    std::string rNumber;
    int baseAscii = 48;
    while(true) {
        rNumber += static_cast<char>(baseAscii + generateRandomNumber(0, 9));
        if (rNumber.size() >= roomNumberLength) break;
    }
    for (const auto& room : rooms) {
        if (room.first == rNumber) return allocateRoomNumber();
    }
    return rNumber;
}

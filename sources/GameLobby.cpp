//
// Created by haduluoke on 10/10/19.
//

#include "GameLobby.h"

int GameLobby::createRoom() {
    int rNumber;
    int from = static_cast<int>(std::pow(10, roomNumberLength - 1));
    int to = static_cast<int>(std::pow(10, roomNumberLength));

    // generate room number
    while(true) {
        rNumber = generateRandomNumber(from, to);
        bool rNumberExisted = false;
        for (const auto& room : rooms) {
            if (room.first == rNumber) rNumberExisted = true;
        }
        if (!rNumberExisted) break;
    }

    // NOTE: in case the lobby is full
    // TODO add no extra room catch
    bool addRoomResult = addRoom(rNumber);
    if (addRoomResult) return rNumber;
    return FAILED;
}

bool GameLobby::addRoom(int rNumber) {
    if (roomCount < ROOM_QUANTITY) {
        rooms[rNumber] = Room { rNumber };
        roomCount++;
        return true;
    } else {
        return false;
    }
}

Room GameLobby::getRoom(int rNumber) {
    return rooms.at(rNumber);
}

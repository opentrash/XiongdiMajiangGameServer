//
// Created by haduluoke on 10/10/19.
//

#ifndef XIONGDIMAJIANGGAMESERVER_GAMELOBBY_H
#define XIONGDIMAJIANGGAMESERVER_GAMELOBBY_H

#include <unordered_map>

#include "Room.h"
#include "utils.h"

class GameLobby {
private:
    const int roomNumberLength = 6;
    static constexpr int ROOM_QUANTITY = 100;          // 房间总数量

    std::unordered_map<int, Room> rooms;
    int roomCount = 0;

public:
    GameLobby() = default;
    int createRoom();
    Room getRoom(int rNumber);

private:
    bool addRoom(int rNumber);
};


#endif //XIONGDIMAJIANGGAMESERVER_GAMELOBBY_H

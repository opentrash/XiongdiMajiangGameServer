//
// Created by haduluoke on 10/10/19.
//

#ifndef XIONGDIMAJIANGGAMESERVER_GAMELOBBY_H
#define XIONGDIMAJIANGGAMESERVER_GAMELOBBY_H

#include <unordered_map>

#include "Room.h"

class GameLobby {
private:
    const int roomNumberLength = 6;
    static constexpr int ROOM_QUANTITY = 100;          // 房间总数量

    std::unordered_map<std::string, Room> rooms;
    int roomCount = 0;

public:
    GameLobby() = default;
    std::string createRoom();
    Room& getRoom(const std::string& rNumber);

private:
    bool addRoom(const std::string& rNumber);
    std::string allocateRoomNumber();
};


#endif //XIONGDIMAJIANGGAMESERVER_GAMELOBBY_H

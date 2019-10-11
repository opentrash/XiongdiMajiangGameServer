//
// Created by haduluoke on 10/10/19.
//

#ifndef XIONGDIMAJIANGGAMESERVER_ROOM_H
#define XIONGDIMAJIANGGAMESERVER_ROOM_H

#include <array>

#include "Tile.h"

class Room {
public:
    Room() = default;
    explicit Room(const std::string& rNumber);
    std::string roomNumber() const;
private:
    static constexpr int TILE_TOTAL_QUANTITY = 144;  // count of majiang tiles
    static constexpr int NORMAL_TILE_KINDS = 3;         // bing tiao wan
    static constexpr int SPECIAL_TILE_KINDS = 3;            // zhong fa bai
    static constexpr int WIND_TILE_KINDS = 4;               // dong nan xi bei
    static constexpr int FLOWER_QUANTITY = 8;          // count of flowers
    static const int TILE_ONE_TYPE_QUANTITY = 9;              // count of every type
    static const int TILE_REPEAT = 4;                   // repeat of each tile

    std::array<Tile, TILE_TOTAL_QUANTITY> tiles{};

    // room number
    std::string _rNumber {  };

private:
    void printTiles();
    void initTiles();
    void shuffleTiles();
};


#endif //XIONGDIMAJIANGGAMESERVER_ROOM_H

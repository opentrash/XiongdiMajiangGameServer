//
// Created by haduluoke on 10/10/19.
//

#include <iostream>
#include <algorithm>    // std::shuffle

#include "Room.h"
#include "utils.h"
#include "GlobalEnums.h"

/*
 * constructor for Room
 * TODO players
 */
Room::Room(const std::string& rNumber): _rNumber(rNumber) {
    std::cout << "create a room with number:" << rNumber << std::endl;
    initTiles();
    shuffleTiles();
    printTiles();
}

/*
 * init tiles with 144 tiles
 */
void Room::initTiles() {
    int tilePos = 0;

    // init tiao, bing, wan
    const std::array<TileType, NORMAL_TILE_KINDS> normalTileTypes { BING, TIAO, WAN };
    for (const auto& tileType : normalTileTypes) {
        for (TileNum typeNum = 0; typeNum < TILE_ONE_TYPE_QUANTITY; typeNum++) {
            for (size_t repeat = 0; repeat < TILE_REPEAT; repeat++) {
                tiles[tilePos++] = Tile { tileType, static_cast<TileNum>(typeNum + 1) };
            }
        }
    }

    // init dong nan xi bei & zhong fa bai
    const std::array<TileType, WIND_TILE_KINDS + SPECIAL_TILE_KINDS> windAndSpecialTileTypes { DONG, LAN, XI, BEI, HONGZHONG, FACAI, BAIBAN };
    for (const auto& tileType : windAndSpecialTileTypes) {
        for (size_t repeat = 0; repeat < TILE_REPEAT; repeat++) {
            tiles[tilePos++] = Tile { tileType, 1 };
        }
    }

    // init 8 flowers
    for (TileNum flower = 1; flower <= FLOWER_QUANTITY; flower++) {
        tiles[tilePos++] = Tile { FLOWER, flower };
    }

}

/*
 * print all tiles in the format [type, num]
 */
void Room::printTiles() {
    for (const Tile& tile : tiles) {
        std::cout << tile << std::endl;
    }
}

/*
 * shuffle tiles
 */
void Room::shuffleTiles() {
    shuffle(tiles.begin(), tiles.end(), std::random_device());
}

/*
 * get roomNumber
 */
std::string Room::roomNumber() const {
    return _rNumber;
};

//
// Created by liyu on 2019/10/13.
//

#include "Player.h"

Player::Player() {
    formHands(14);
}

// for test only
void Player::formHands(int handsNumber) {
    std::array<int, 35> tileId {};

    int tilePos = 0;
    const std::array<TileType, 3> normalTileTypes {BING, TIAO, WAN};
    for (const auto& tileType: normalTileTypes){
        for (TileNum typeNum = 1; typeNum < 10; typeNum++){
            tileId[tilePos++] = tileType * 10 + typeNum;
        }
    }

    const std::array<TileType, 8> specialTileType {DONG, LAN, XI, BEI, HONGZHONG, FACAI, BAIBAN, FLOWER};
    for (const auto& tileType: specialTileType){
        tileId[tilePos++] = tileType * 10;
    }

    int handsCount = 0;
    int chooseTilePos = 0;
    while (handsCount < handsNumber) {
        chooseTilePos = generateRandomNumber(0, 34);
        std::cout << chooseTilePos << std::endl;
        if (hands.find(tileId[chooseTilePos]) == hands.end()){
            hands[tileId[chooseTilePos]] = 0;
        }
        if (hands[tileId[chooseTilePos]] < 4){
            hands[tileId[chooseTilePos]] += 1;
            handsCount += 1;
        }
    }
    for(auto& h : hands) {
        std::cout << h.first << ": " << h.second << std::endl;
    }
}
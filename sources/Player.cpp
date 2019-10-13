//
// Created by liyu on 2019/10/13.
//

#include "Player.h"

Player::Player() {
    handsNumber = 3;
    formHands();
    sortHands();
}

// for test only
void Player::formHands() {
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
        if (hands.find(tileId[chooseTilePos]) == hands.end()){
            hands[tileId[chooseTilePos]] = 0;
        }
        if (hands[tileId[chooseTilePos]] < 4){
            hands[tileId[chooseTilePos]] += 1;
            handsCount += 1;
        }
    }
}

void Player::sortHands(){
    int *sortedHands = new int(handsNumber);
    int tilesPos = 0;
    for (const auto& handsTilePointer: hands){
        for (int tileNum=0; tileNum< handsTilePointer.second; tileNum++){
            sortedHands[tilesPos++] = handsTilePointer.first;
        }
    }
    std::sort(sortedHands, sortedHands+handsNumber);
    for (int pos=0; pos<tilesPos; pos++){
        std::cout << "[" << TileTypeNames[sortedHands[pos]/10] << "," << sortedHands[pos]%10 << "]" << std::endl;
    }
    delete[] sortedHands;
}

int Player::draw(int drawTileId){
    if (hands.find(drawTileId) == hands.end()){
        hands[drawTileId] = 0;
    }
    if (hands[drawTileId] > 3){
        std::cout << "invalid draw: tile number is greater than 4!" << std::endl;
        return -1;
    }
    hands[drawTileId] += 1;
    handsNumber += 1;
    return 0;

}

int Player::discard(int discardTileId) {
    if (hands.find(discardTileId) == hands.end()){
        std::cout << "invalid discard: no tile in hands!" << std::endl;
        return -1;
    }
    if (hands[discardTileId] < 1){
        std::cout << "invalid discard: no tile in hands!" << std::endl;
        return -1;
    }
    hands[discardTileId] -= 1;
    handsNumber -= 1;
    return 0;
}
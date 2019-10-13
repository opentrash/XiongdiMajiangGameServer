//
// Created by liyu on 2019/10/13.
//

#ifndef XIONGDIMAJIANGGAMESERVER_PLAYER_H
#define XIONGDIMAJIANGGAMESERVER_PLAYER_H

#include <iostream>
#include <random>
#include <algorithm>

#include "Tile.h"
#include "GlobalEnums.h"
#include "GlobalMaps.h"
#include "utils.h"

class Player {
public:
    Player();
private:
    int handsNumber;
    std::unordered_map<int, int> hands;
    std::unordered_map<int, int> melds;  // 0: chi 1: peng  2: gang

private:
    void formHands(); // form cards, for test only
    void sortHands();  // sort hands by specific sequence
    int draw(int drawTileId);  // draw from tiles
    int discard(int discardTileId); // discard from hands


//        void chow();  // chi
//        void pung();  // peng
//        void kong();  // gang


};

#endif //XIONGDIMAJIANGGAMESERVER_PLAYER_H

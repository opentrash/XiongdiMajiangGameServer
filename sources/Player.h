//
// Created by liyu on 2019/10/13.
//

#ifndef XIONGDIMAJIANGGAMESERVER_PLAYER_H
#define XIONGDIMAJIANGGAMESERVER_PLAYER_H

#include <iostream>
#include <random>

#include "Tile.h"
#include "GlobalEnums.h"
#include "utils.h"

class Player {
public:
    Player();
private:
    std::unordered_map<int, int> hands;
    std::unordered_map<int, int> melds;  // 0: chi 1: peng  2: gang

private:
    void formHands(int handsNumber); // form cards, for test only
//        void printHands();
//        void discard(); // discard from hands
//        void draw();  // draw from tiles
//        void sort();  // sort hands by specific sequence
//        void chow();  // chi
//        void pung();  // peng
//        void kong();  // gang


};

#endif //XIONGDIMAJIANGGAMESERVER_PLAYER_H

//
// Created by haduluoke on 10/10/19.
//

#include "Tile.h"

std::ostream &operator<<(std::ostream &os, const Tile &tile) {
//    std::unordered_map<int, std::string> TileTypeNames {
//            { BING, "BING" },
//            { TIAO, "TIAO" },
//            { WAN, "WAN" },
//            { DONG, "DONG" },
//            { NAN, "NAN" },
//            { XI, "XI" },
//            { BEI, "BEI" },
//            { HONGZHONG, "HONGZHONG" },
//            { FACAI, "FACAI" },
//            { BAIBAN, "BAIBAN" },
//            { FLOWER, "FLOWER"}
//    };
    std::cout <<  "[" << TileTypeNames[tile._type] << "," << static_cast<int>(tile._num) << "]";
    return os;
}

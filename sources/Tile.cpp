//
// Created by haduluoke on 10/10/19.
//

#include "Tile.h"

std::ostream &operator<<(std::ostream &os, const Tile &tile) {
    std::cout <<  "[" << TileTypeNames[tile._type] << "," << static_cast<int>(tile._num) << "]";
    return os;
}

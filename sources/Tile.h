//
// Created by haduluoke on 10/10/19.
//

#ifndef XIONGDIMAJIANGGAMESERVER_TILE_H
#define XIONGDIMAJIANGGAMESERVER_TILE_H

#include <ostream>
#include <iostream>

#include "GlobalEnums.h"
#include "GlobalDefines.h"
#include "GlobalMaps.h"

class Tile {
public:

private:
    TileType _type;
    TileNum _num;

public:
    Tile(): _type(BING), _num(0) {  }

    explicit
    Tile(TileType __type, TileNum __num): _type(__type), _num(__num) {  }

    friend
    std::ostream& operator<<(std::ostream& os, const Tile& tile);
};


#endif //XIONGDIMAJIANGGAMESERVER_TILE_H

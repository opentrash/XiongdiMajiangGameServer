//
// Created by haduluoke on 10/10/19.
//

#ifndef XIONGDIMAJIANGGAMESERVER_GLOBALMAPS_H
#define XIONGDIMAJIANGGAMESERVER_GLOBALMAPS_H

#include <unordered_map>
#include "GlobalEnums.h"

static std::unordered_map<int, std::string> TileTypeNames {
    { BING, "BING" },
    { TIAO, "TIAO" },
    { WAN, "WAN" },
    { DONGFENG, "DONGFENG" },
    { NANFENG, "NANFENG" },
    { XIFENG, "XIFENG" },
    { BEIFENG, "BEIFENG" },
    { HONGZHONG, "HONGZHONG" },
    { FACAI, "FACAI" },
    { BAIBAN, "BAIBAN" },
    { FLOWER, "FLOWER"}
};

#endif //XIONGDIMAJIANGGAMESERVER_GLOBALMAPS_H

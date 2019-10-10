//
// Created by haduluoke on 10/10/19.
//

#ifndef XIONGDIMAJIANGGAMESERVER_UTILS_H
#define XIONGDIMAJIANGGAMESERVER_UTILS_H

#include <chrono>

static unsigned randomSeed() {
    return std::chrono::system_clock::now().time_since_epoch().count();
}

template <typename T>
static T generateRandomNumber(T from, T to) {
    unsigned seed = randomSeed();
    std::default_random_engine generator { seed };
    std::uniform_real_distribution<T> distribution { from, to };
    return distribution(generator);
}

static int generateRandomNumber(int from, int to) {
    unsigned seed = randomSeed();
    std::default_random_engine generator { seed };
    std::uniform_int_distribution<int> distribution { from, to };
    return distribution(generator);
}

#endif //XIONGDIMAJIANGGAMESERVER_UTILS_H

//
// Created by haduluoke on 10/10/19.
//

#ifndef XIONGDIMAJIANGGAMESERVER_UTILS_H
#define XIONGDIMAJIANGGAMESERVER_UTILS_H

#include <chrono>
#include <random>

inline unsigned randomSeed() {
    return std::chrono::system_clock::now().time_since_epoch().count();
}

template <typename T>
T generateRandomNumber(T from, T to) {
    unsigned seed = randomSeed();
    std::default_random_engine generator { seed };
    std::uniform_real_distribution<T> distribution { from, to };
    return distribution(generator);
}


template <>
int generateRandomNumber(int from, int to);

#endif //XIONGDIMAJIANGGAMESERVER_UTILS_H

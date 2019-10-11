//
// Created by haduluoke on 10/10/19.
//

#include <random>

#include "utils.h"

template <>
int generateRandomNumber(int from, int to) {
    std::random_device rd;
    std::uniform_int_distribution<int> distribution { from, to };
    return distribution(rd);
}

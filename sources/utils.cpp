//
// Created by haduluoke on 10/10/19.
//

#include "utils.h"

template <>
int generateRandomNumber(int from, int to) {
    unsigned seed = randomSeed();
    std::default_random_engine generator { seed };
    std::uniform_int_distribution<int> distribution { from, to };
    return distribution(generator);
}

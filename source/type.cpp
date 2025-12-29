#include "../headers/type.h"

#include <random>

Types getRandomType() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 7);  // 0 to 7 (8 types)

    return static_cast<Types>(dis(gen));
}

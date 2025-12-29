#include "type.h"
#include <random>

std::string pick_random_type()
{
    // If no types are available, return empty string
    if (TypesCount == 0) return {};

    std::random_device rd;
    std::mt19937 gen(rd());

    // Pick a random index in [0, TypesCount-1]
    std::uniform_int_distribution<int> dis(0, static_cast<int>(TypesCount) - 1);
    int idx = dis(gen);

    return Types[idx];
}

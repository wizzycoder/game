#ifndef TYPE_H
#define TYPE_H

#include <string>

const std::string Types[] = {
    "Fire",
    "Water",
    "Earth",
    "Air",
    "Dark"
};

constexpr auto TypesCount = sizeof(Types) / sizeof(Types[0]);
#endif //TYPE_H

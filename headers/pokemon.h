#ifndef POKEMON_H
#define POKEMON_H

#include <map>
#include <string>
#include <variant>
#include "type.h"
#include <random>

class Pokemon {

public:
    const std::string name;
    const std::string type_pokemon;
    std::map<std::string, std::variant<int, std::string, double>> stats{
        {"health", 100 },{"power", 10}, {"defense", 10}, {"level", 1}, {"damage", 10} };

    Pokemon(const std::string& name, const std::string& type_pokemon);
};

#endif //POKEMON_H

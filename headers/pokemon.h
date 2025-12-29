#ifndef POKEMON_H
#define POKEMON_H

#include <map>
#include <random>
#include <string>
#include <variant>

#include "type.h"

class Pokemon {
   public:
    const std::string name;
    const std::string type_pokemon;
    int health = 100;
    int power = 10;
    int defense = 10;
    int level = 1;
    int damage = 10;

    Pokemon(const std::string& name, const std::string& type_pokemon);
};

#endif  // POKEMON_H

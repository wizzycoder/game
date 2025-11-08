#ifndef PLAYER_H
#define PLAYER_H

#include <map>
#include <string>
#include <variant> // Learnt that this helps to store multiple things
#include <vector>
#include "pokemon.h"

class Player {
public:
    const std::string name;
    const std::map<std::string, std::variant<int, std::string, double>> stats{
        {"health", 100 },{"power", 10}, {"defense", 10}, {"level", 1}, {"money", 100.00} };

    Player(const std::string& name);

    std::vector<Pokemon> pokemons;
};
#endif  // PLAYER_H

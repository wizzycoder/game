#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <map>
#include <string>
// #include <variant>  Learnt that this helps to store multiple things
#include <vector>

#include "pokemon.h"

class Player {
   public:
    const std::string name;
    int health = 100;
    int power = 10;
    int defense = 10;
    int level = 1;
    double money = 100.00;

    Player(const std::string& name);

    std::vector<Pokemon> pokemons;
    void Show_stats();
};
#endif  // PLAYER_H

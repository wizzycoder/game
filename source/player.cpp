#include "player.h"

#include <iostream>
#include <variant>

Player::Player(const std::string& name) : name(name) {}

void Player::Show_stats() {
    std::cout << "health: " << Player::health << "\n";
    std::cout << "power:  " << Player::power << "\n";
    std::cout << "defense: " << Player::defense << "\n";
    std::cout << "level:  " << Player::level << "\n";
    std::cout << "money:  " << Player::money << "\n";
}

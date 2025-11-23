#include "player.h"
#include <iostream>
#include <variant>

Player::Player(const std::string& name)
    : name(name)
{
}

void Player::Show_stats(std::map<std::string, std::variant<int, std::string, double>> stats)
{
    for (const auto& pair : stats)
    {
        std::cout << pair.first << ": ";
        std::visit([](const auto& value) { std::cout << value; }, pair.second);
        std::cout << '\n';
    }

}

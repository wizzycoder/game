#include "../headers/player.h"

#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

using namespace ftxui;

Player::Player(const std::string& name) : name(name) {}

void Player::Show_stats() {
    // Create the stats display
    auto document = vbox({
        text("=== PLAYER STATS ===") | bold | color(Color::Cyan),
        separator(),
        text("Name:    " + name),
        text("Health:  " + std::to_string(health)),
        text("Power:   " + std::to_string(power)),
        text("Defense: " + std::to_string(defense)),
        text("Level:   " + std::to_string(level)),
        text("Money:   " + std::to_string(money)),
        separator(),
        text("Press any key to continue...") | dim
    }) | border;

    // Render it to screen
    auto screen = Screen::Create(Dimension::Fit(document));
    Render(screen, document);
    screen.Print();

    // Wait for keypress
    std::cin.get();
}

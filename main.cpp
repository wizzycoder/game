#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/dom/elements.hpp>
#include <string>
#include <vector>

#include "player.h"
#include "pokemon.h"

using namespace ftxui;

int main() {
    // Character setup
    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;

    Player player(name);
    Pokemon charizard("charizard", Fire);

    auto screen = ScreenInteractive::Fullscreen();

    // Menu options
    int selected = 0;
    std::vector<std::string> options = {"Search Pokemon", "Random Battle", "Show Stats", "Quit"};

    auto menu = Menu(&options, &selected);

    auto renderer = Renderer(menu, [&] {
        return vbox({text("=== POKEMON GAME ===") | bold | color(Color::Red) | center,
                     text("Player: " + name) | color(Color::Yellow), separator(), menu->Render(),
                     separator(), text("Use arrows to move, Enter to select") | dim | center}) |
               border;
    });

    auto component = CatchEvent(renderer, [&](Event event) {
        if (event == Event::Return) {
            if (selected == 0) {
                // Search Pokemon
            } else if (selected == 1) {
                // Battle Random
            } else if (selected == 2) {
                // Show Stats
                player.Show_stats();
            } else if (selected == 3) {
                screen.ExitLoopClosure()();
            }
            return true;
        }
        return false;
    });

    screen.Loop(component);
    return 0;
}

#include <iostream>
#include "player.h"
#include "pokemon.h"
#include <vector>

int main() {
    ///    character setup / game stuff
    std::string name;
    std::cout << "enter name: ";
    std::cin >> name;
    Player player(name);
    Pokemon charizard("charizard", Types[0]);
    // -------------------------------

    while (true)
    {
        std::string option;

        std::cout << "WELCOME\n";
        std::cout << ".quit : q\n";
        std::cout << ".search pokemon : sp\n";
        std::cout << ".battle random : br\n";
        std::cout << ".show stats : ss\n";

        std::cin >> option;

        if (option == "q") {
            break;
        }
        else if (option == "sp") {
            std::cout << "Searching for a wild Pokemon...\n";
        }
        else if (option == "br") {
            std::cout << "Starting a random battle...\n";
        }
        else if (option == "ss") {
            std::cout << "Showing stats...\n";
        }
        else {
            std::cout << "Unknown option: " << option << "\n";
        }
        break;
    }
};

/* Pokemon search_pokemon(int pokemon_level)
{
    std::string option;
    std::cout << "would you like to claim your level : cl or random pull : rp or random fight : rf\n";

    if (option == "cl") {

    }

}*/

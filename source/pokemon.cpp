#include "../headers/pokemon.h"

// ...existing code...
Pokemon::Pokemon(const std::string& name_p, const std::string& type_pokemon_p)
    : name(name_p), type_pokemon(type_pokemon_p) {
}

void random_pokemon(int level)
{
    std::string name;

    std::random_device dev;
    std::mt19937 gen(dev());
    std::uniform_int_distribution<> range(0, 1);
    std::uniform_int_distribution<> range_tp(0, (TypesCount > 0 ? TypesCount - 1 : 0));
    int type_pick = range_tp(gen);

    std::string words[] = { "o", "r", "u", "k", "J", "j", "t", "T", "f" };
    int length = sizeof(words) / sizeof(words[0]);

    for (int i = 0; i < length; i++)
    {
        int rand_num = range(gen);

        if (rand_num == 1)
        {
            name.append(words[i]);
        }
    }

    Pokemon rp(name, Types->at(type_pick));
    (void)rp; // suppress unused-variable warning
}
// ...existing code...

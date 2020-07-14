#include "Dwarf.h"

Dwarf::Dwarf(std::string name, int hitPoints, int armor ) : Character(hitPoints, armor, 4), name(name)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

void Dwarf::attack(Character& other)
{
    //std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    Character::attack(other);
}


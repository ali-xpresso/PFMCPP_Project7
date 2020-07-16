#include "Paladin.h"

Paladin::Paladin(std::string name_, int hitPoints, int armor ) : Character(hitPoints, armor, 10), name(name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}

void Paladin::attack(Character& other)
{
    Character::attack(other);
}

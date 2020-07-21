#include "DragonSlayer.h"
#include "Dragon.h"

DragonSlayer::DragonSlayer(std::string name_, int hp, int armor_) :
    Character(hp, armor_, 4),
    name(name_)
{
    helpfulItems = makeHelpfulItems(std::rand() % 5);
    defensiveItems = makeDefensiveItems(std::rand() % 5);
}

const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        if (attackItem == nullptr)
        {
            std::cout << "The Dragon Slayer's attack item has already been used. No 10x damage multiplier. " << std::endl;
        }
        else
        {
            attackItem->use(this);
            attackItem.reset();
        }

        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
}

std::string DragonSlayer::getStats()
{
   return getCharacterStats(this);
}

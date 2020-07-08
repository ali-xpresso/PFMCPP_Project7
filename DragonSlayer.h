#pragma once
#include "Character.h"
#include "Utility.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name, int hitPoints, int armor);
    const std::string&  getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    
private:
    std::unique_ptr<AttackItem> attackItem {new AttackItem() };
    const std::string name;
};

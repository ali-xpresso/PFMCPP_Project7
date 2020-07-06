#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name, int hitPoints, int armor);
    const std::string&  getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};

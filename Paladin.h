#pragma once
#include "Character.h"
#include "Utility.h"

struct Paladin : Character
{
public:
    Paladin(std::string name, int hitPoints, int armor);
    const std::string&  getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

private:
    const std::string name;
};

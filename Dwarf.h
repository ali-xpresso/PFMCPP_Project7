#pragma once
#include "Character.h"

struct Dwarf : Character
{
public:
    Dwarf(std::string name, int hitPoints, int armor);
    const std::string&  getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

private:
    const std::string name;
};

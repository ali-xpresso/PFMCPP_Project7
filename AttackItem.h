#pragma once
#include "Item.h"
#include "Utility.h"

struct Character;

struct AttackItem : Item
{
    AttackItem() : Item("attackItem", 10) { }
    void use(Character* character) override;
};
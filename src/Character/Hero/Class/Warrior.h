#pragma once
#include "../Hero.h"

class Warrior : public Hero
{
private:
    
public:
    Warrior(const string& name, int health = 0, int strength = 0, int defence = 0)
    : Hero(name, health, strength, defence) {}

    void applyBonus() override;
};
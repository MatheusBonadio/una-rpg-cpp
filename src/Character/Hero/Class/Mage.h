#pragma once
#include "../Hero.h"

class Mage : public Hero
{
private:
    
public:
    Mage(const string& name, int health = 0, int strength = 0, int defence = 0)
    : Hero(name, health, strength, defence) {}

    void applyBonus() override;
};
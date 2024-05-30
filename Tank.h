#ifndef TANK_H
#define TANK_H

#include "Hero.h"

class Tank : public Hero
{
private:
    
public:
    Tank(const string& name, int health = 0, int power = 0, int defence = 0)
    : Hero(name, health, power, defence) {}

    void applyBonus() override;
};

#endif
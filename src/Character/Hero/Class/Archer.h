#ifndef ARCHER_H
#define ARCHER_H

#include "../Hero.h"

class Archer : public Hero
{
private:
    
public:
//IMPORTANT: DECIDE ALL THE BASE STATS FOR EACH CLASS
    Archer(const string& name, int health = 0, int strength = 0, int defence = 0, int dexterity = 0)
    : Hero(name, health, strength, defence, dexterity) {}

    void applyBonus() override;
};

#endif
#ifndef MAGE_H
#define MAGE_H

#include "../Hero.h"

class Mage : public Hero
{
private:
    
public:
//IMPORTANT: DECIDE ALL THE BASE STATS FOR EACH CLASS
    Mage(const string& name, int health = 0, int strength = 0, int defence = 0, int dexterity = 0)
    : Hero(name, health, strength, defence, dexterity) {}

    void applyBonus() override;
};

#endif
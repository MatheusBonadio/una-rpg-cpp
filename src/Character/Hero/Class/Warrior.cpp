#include "Warrior.h"
#include <iostream>

void Warrior::applyBonus()
{
    int newDefence = getDefence() + 3;
    int newHealth = getHealth() + 7;
    int newStrength = getStrength() + 10;
    
    setDefence(newDefence);
    setHealth(newHealth);
	setStrength(newStrength);
    
}

#include "Tank.h"
#include <iostream>

void Tank::applyBonus()
{
    int newDefence = getDefence() + 10;
    int newHealth = getHealth() + 10;
    int newStrength = getStrength() + 5;
    
    setDefence(newDefence);
    setHealth(newHealth);
    setStrength(newStrength);
    
}

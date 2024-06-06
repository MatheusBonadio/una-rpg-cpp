#include "Mage.h"
#include <iostream>

void Mage::applyBonus() {
    int newDefence = getDefence() + 5;
    int newHealth = getHealth() + 5;
    int newStrength = getStrength() + 0;
    int newDexterity = getDexterity() + 0;
    setDefence(newDefence);
    setHealth(newHealth);
    setStrength(newStrength);
    setDexterity(newDexterity);
}

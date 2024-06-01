#include "../Class/Mage.h"
#include <iostream>

void Mage::applyBonus() {
    int newDefence = getDefence() + 5;
    int newHealth = getHealth() + 5;
    int newStrength = getStrength() + 0;
    int newIntelligence = getIntelligence() + 10;
    int newDexterity = getDexterity() + 0;
    setDefence(newDefence);
    setHealth(newHealth);
    setStrength(newStrength);
    setIntelligence(newIntelligence);
    setDexterity(newDexterity);
}

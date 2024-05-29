#include "DefenseBoostItem.h"
#include "BaseCharacter.h"

void DefenseBoostItem::use(BaseCharacter& character) {
    int newDefence = character.getDefence() + defenseBoost;
    character.setDefence(newDefence);
    cout << character.getName() << " used " << name << " and gained " << defenseBoost << " defense!" << endl;
}

#include "AttackBoostItem.h"
#include "../../Character/BaseCharacter.h"

void AttackBoostItem::use(BaseCharacter& character){
    int newStrength = character.getStrength() + attackBoost;
    character.setStrength(newStrength);
    cout << character.getName() << " used " << name << " and gained " << attackBoost
    << " attack power!" << endl;
}
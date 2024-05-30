#include "AttackBoostItem.h"
#include "BaseCharacter.h"

void AttackBoostItem::use(BaseCharacter& character){
    int newPower = character.getPower() + attackBoost;
    character.setPower(newPower);
    cout << character.getName() << " used " << name << " and gained " << attackBoost
    << " attack power!" << endl;
}
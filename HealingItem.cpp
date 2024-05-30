#include "HealingItem.h"
#include "BaseCharacter.h"

void HealingItem::use(BaseCharacter& character) {
    int newHealth = character.getHealth() + healAmount;
    character.setHealth(newHealth);
    cout << character.getName() << " used " << name << " and healed/gained " << healAmount << " health points!" << endl;
}

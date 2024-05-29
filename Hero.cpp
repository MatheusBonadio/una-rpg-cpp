#include "Hero.h"
#include <iostream>

using namespace std;

void Hero::displayStatus() {
    BaseCharacter::displayStatus();
    cout << "Gold: " << gold << "\nExperience: " << experience << "\nInventory: ";
    for (const Item* item : inventory) {
        cout << item->getName() << " ";
    }
    cout << endl;
}

void Hero::displayInventory() const {
    cout << "Inventory:" << endl;
    for (const auto& item : inventory) {
        item->display();
    }
}

void Hero::removeItem(const string& itemName) {
    auto it = find_if(inventory.begin(), inventory.end(), [&itemName](const Item* item) {
        return item->getName() == itemName;
    });
    if (it != inventory.end()) {
        inventory.erase(it);
    }
}

void Hero::applyBonus() {
    int newDefence = getDefence() + 5;
    int newHealth = getHealth() + 5;
    int newPower = getPower() + 5;
    setDefence(newDefence);
    setHealth(newHealth);
    setPower(newPower);
}
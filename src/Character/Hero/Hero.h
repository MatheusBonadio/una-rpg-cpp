#pragma once

#include "../BaseCharacter.h"
#include "../../Items/Item.h"
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Hero : public BaseCharacter
{
private:
	vector<Item*> inventory;
    int gold;
    int experience;

public:
    Hero(const string& name, int health = 0, int strength = 0, int defence = 0)
    : BaseCharacter(name, health, strength, defence), gold(0), experience(0) {}

    int getGold() const { return gold; }
    int getExperience() const { return experience; }
    const vector<Item*>& getInventory() const { return inventory; }
    
    void addGold(int amount) { gold += amount; }
    void addExperience(int exp) { experience += exp; }
    void addItem(Item* item) { inventory.push_back(item); }
    void removeItem(const string& itemName);

    void displayStatus() override;
    void displayInventory() const;
    virtual void applyBonus() override;
};

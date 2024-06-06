#ifndef HERO_H
#define HERO_H

#include "../BaseCharacter.h"
#include "../../Items/Item.h"
#include <vector>
#include <string>
#include<algorithm>

// Defining the Hero class, which is derived from BaseCharacter. 
// It has an array of pointers to items called inventory, as well as attributes for gold and experience.

class Hero : public BaseCharacter
{
private:
    vector<Item*> inventory;  // Pointers to the items in the inventory(working with the items inplace)
    int gold;
    int experience;

public:
    Hero(const string& name, int health = 0, int strength = 0, int defence = 0, int dexterity = 0)
    : BaseCharacter(name, health, strength, defence, dexterity), gold(0), experience(0) {}
    //Future we can add a new status "agility", this stat provide a bonus of attribute dodge 


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

#endif

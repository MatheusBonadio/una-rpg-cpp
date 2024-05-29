#ifndef DEFENSEBOOSTITEM_H
#define DEFENSEBOOSTITEM_H

#include "Item.h"
#include "BaseCharacter.h"

class DefenseBoostItem : public Item
{
private:
    int defenseBoost;

public:
    DefenseBoostItem(const string& name, const string& description, int value, int defenseBoost)
    : Item(name, description, value), defenseBoost(defenseBoost) {}

    void use(BaseCharacter& character) override;
};

#endif

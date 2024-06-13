#pragma once
#include "../Item.h"

class HealingItem : public Item
{
private:
    int healAmount;

public:
    HealingItem(const string& name, const string& description, int value, int healAmount)
    : Item(name, description, value), healAmount(healAmount) {}

    void use(BaseCharacter& character) override;
};

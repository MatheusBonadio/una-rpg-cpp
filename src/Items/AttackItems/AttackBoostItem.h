#pragma once
#include "../Item.h"

class AttackBoostItem : public Item
{
private:
    int attackBoost;
public:
    AttackBoostItem(const string& name, const string& description, int value, int attackBoost )
    : Item(name,description,value),attackBoost(attackBoost){}
    
    void use(BaseCharacter& character) override;

    void display() const  {
        Item::display();
        cout << "Attack Boost: " << attackBoost << endl;
    }

};
#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class BaseCharacter; //forward declaration

// Defining an abstract class called Item. It contains an item name, description, and value.

class Item
{
protected:
    string name;
    string description;
    int value;

public:
    //constructor with initialization list
    Item(const string& name, const string& description, int value)
    : name(name), description(description), value(value) {}

    //pure virtual function
    virtual void use(BaseCharacter& character) = 0; 

    //getters
    string getName() const { return name; }
    string getDescription() const { return description; }
    int getValue() const { return value; }

    //virtual function to displat item details
    virtual void display() const;

    //destructor
    virtual ~Item() = default;
};

#endif

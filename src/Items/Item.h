#pragma once

#include <string>
#include <iostream>

using namespace std;

class BaseCharacter;

class Item
{
protected:
    string name;
    string description;
    int value;

public:
    Item(const string& name, const string& description, int value)
    : name(name), description(description), value(value) {}

    virtual void use(BaseCharacter& character) = 0; 

    string getName() const { return name; }
    string getDescription() const { return description; }
    int getValue() const { return value; }

    virtual void display() const;

    virtual ~Item() = default;
};
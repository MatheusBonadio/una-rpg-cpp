#include "Game.h"
#include <iostream>
#include <string>
#include "../Character/Hero/Class/Archer.h"
#include "../Character/Hero/Class/Mage.h"
#include "../Character/Hero/Class/Tank.h"
#include "../Character/Hero/Class/Warrior.h"
#include "../Character/Hero/Hero.h"
#include "../Character/Enemy/Enemy.h"
#include "../../Combat.h"
#include <iostream>

using namespace std;

void Game::startNewGame() {
    cout << "Starting a new game..." << endl;
    chooseClass();
}

void Game::showCredits() {
    cout << "Game developed by" << endl;
}

void Game::exitGame() {
    cout << "Exiting game. Thank you for playing!" << endl;
}

void Game::chooseClass() {
    system("cls");// limpa a tela
    cout << "===== Choose class =====" << endl;
    cout << "1. Archer" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Tank" << endl;
    cout << "4. Warrior" << endl;
    cout << "Please select an option (1-4): ";

    int choice;
    string name;
    std::cin >> choice;
    std::cin.ignore();  // Ignore newline character left in the buffer by std::cin

    system("cls");// limpa a tela

    Hero* hero = nullptr;
    Hero* tank = nullptr;

    switch (choice) {
    case 1: {
        cout << "Enter the name for your Archer: ";
        getline(cin, name);
        hero = new Archer(name);
        cout << "You have created an Archer named " << name << "." << endl;
        break;
    }
    case 2: {
        cout << "Enter the name for your Mage: ";
        getline(cin, name);
        hero = new Mage(name);
        cout << "You have created a Mage named " << name << "." << endl;
        break;
    }
    case 3: {
        cout << "Enter the name for your Tank: ";
        getline(cin, name);
        hero = new Tank(name);
        cout << "You have created a Tank named " << name << "." << endl;
        break;
    }
    case 4: {
        cout << "Enter the name for your Warrior: ";
        getline(cin, name);
        hero = new Warrior(name);
        cout << "You have created a Warrior named " << name << "." << endl;
        break;
    }
    default:
        std::cout << "Invalid option. Please try again." << std::endl;
        return; // exit the function if the input is invalid
    }

    hero->applyBonus();
    hero->displayStatus();

    // For demonstration, let's create a dummy Tank for the combat example
    tank = new Tank("DummyTank");

    system("cls"); // limpa a tela

    std::cout << "Starting combat..." << std::endl;

    Combat combat;

    // Example battles
    combat.combatTurn(*hero, *tank); // Pass by reference, not by pointer

    cout << "Combat finished.\n\n\n";

    // Clean up dynamically allocated memory
    delete hero;
    delete tank;
}

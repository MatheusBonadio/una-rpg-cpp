#include "Game.h"
#include <iostream>
#include <string>
#include "../Character/Hero/Class/Archer.h"
#include "../Character/Hero/Class/Mage.h"
#include "../Character/Hero/Class/Tank.h"
#include "../Character/Hero/Class/Warrior.h"
#include "../Character/Hero/Hero.h"
#include "../Character/Enemy/Enemy.h"
#include "../Character/Combat.h"
#include "../Items/AttackItems/AttackBoostItem.h"
#include "../Items/DefenseItems/DefenseBoostItem.h"
#include "../Items/Potions/HealingItem.h"

using namespace std;

void Game::startNewGame() {
    cout << "Starting a new game..." << endl;
    chooseClass();
}

void Game::showCredits() {
    cout << "Game developed by: " << endl;
	cout << "Angelo Kuan Kai Huang" << endl;
	cout << "João Pedro Luchetta" << endl;
	cout << "João Lucas Rissi da Silva" << endl;
	cout << "Kayky Luiz de Paula Araujo" << endl;
	cout << "Marco Antônio Lonardon Júnior" << endl;
	cout << "Matheus Lima Bonadio" << endl;
	cout << "Vítor Nascimento Moreira" << endl;
}

void Game::exitGame() {
    cout << "Exiting game. Thank you for playing!" << endl;
}

void Game::chooseClass() {
    system("cls");
    cout << "===== Choose class =====" << endl;
    cout << "1 - Archer" << endl;
    cout << "2 - Mage" << endl;
    cout << "3 - Tank" << endl;
    cout << "4 - Warrior" << endl << endl;
    cout << "Please select an option (1-4): ";

    int choice;
    string name;
    cin >> choice;
    cin.ignore();

    system("cls");

    Hero* hero = nullptr;

    switch (choice) {
    case 1: {
        cout << "Enter the name for your Archer: ";
        getline(cin, name);
        hero = new Archer(name);
        break;
    }
    case 2: {
        cout << "Enter the name for your Mage: ";
        getline(cin, name);
        hero = new Mage(name);
        break;
    }
    case 3: {
        cout << "Enter the name for your Tank: ";
        getline(cin, name);
        hero = new Tank(name);
        break;
    }
    case 4: {
        cout << "Enter the name for your Warrior: ";
        getline(cin, name);
        hero = new Warrior(name);
        break;
    }
	default: 
        cout << "Invalid option. Please try again." << endl;
        return;
	}

	hero->applyBonus();
	hero->displayStatus();
	
	while (true) {
		chooseAction(*hero);
	}
}

void Game::chooseAction(Hero& hero) {
	cout << endl << "===== Choose action =====" << endl;
	cout << "1 - Get initial sword" << endl;
	cout << "2 - Go into combat" << endl;
	cout << "3 - View status" << endl;
	cout << "Please select an option (1-3): ";

	int choice;
	cin >> choice;
	cin.ignore();

	switch (choice) {
	case 1: {
		for (Item *item : hero.getInventory())
		{
			cout << item->getName() << endl;
			/*if (item->getDescription().compare("A dull blade") == 0) {
				cout << "You already got the starting sword" << endl;
				break;
			}*/
		}
		cout << endl;
		AttackBoostItem sword("Sword", "A dull blade", 0, 5);
		hero.addItem(&sword);

		sword.display();
		sword.use(hero);
		break;
	}
	case 2: {
		Enemy enemy("Goblin", 30, 20, 5, 100, 50);

		system("cls");

		Combat combat;
		combat.combatTurn(hero, enemy);

		cout << "Combat finished.\n";
		break;
	}
	case 3: {
		hero.displayStatus();
		break;
	}
	default:
		cout << "Invalid option. Please try again." << endl;
		return;
	}

	/*DefenseBoostItem shield("Shield", "Protects against attacks", 30, 5);
	HealingItem potion("Potion", "Heals health", 20, 10);

	hero.addItem(&shield);
	hero.addItem(&potion);*/

	/*cout << "\n---- Using Items ----\n"
		<< endl;
	for (Item *item : hero.getInventory())
	{
		item->use(hero);
	}

	hero.applyBonus();
	hero.displayStatus();*/


	//delete hero;
	//delete tank;
}
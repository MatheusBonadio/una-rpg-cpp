#include "Game.h"
#include <iostream>
#include <string>
#include "../Character/Hero/Class/Archer.h"
#include "../Character/Hero/Class/Mage.h"
#include "../Character/Hero/Class/Tank.h"
#include "../Character/Hero/Class/Warrior.h"

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
	cout << "===== Choose class =====" << endl;
	cout << "1. Archer" << endl;
	cout << "2. Mage" << endl;
	cout << "3. Tank" << endl;
	cout << "4. Warrior" << endl;
	cout << "Please select an option (1-4): ";

	int choice;
	string name;
	std::cin >> choice;

	switch (choice) {
	case 1: {

		cout << "Enter the name for your Archer: ";
		cin >> name;

		Archer newHero(name);
		cout << "You have created an Archer named " << name << "." << endl;

		newHero.applyBonus();
		newHero.displayStatus();

		break;
	}
	case 2: {
		cout << "Enter the name for your Mage: ";
		cin >> name;

		Mage newHero(name);
		cout << "You have created an Mage named " << name << "." << endl;

		newHero.applyBonus();
		newHero.displayStatus();

		break;
	}
	case 3: {
		cout << "Enter the name for your Tank: ";
		cin >> name;

		Tank newHero(name);
		cout << "You have created an Tank named " << name << "." << endl;

		newHero.applyBonus();
		newHero.displayStatus();

		break;
	}
	case 4: {
		cout << "Enter the name for your Warrior: ";
		cin >> name;

		Warrior newHero(name);
		cout << "You have created an Warrior named " << name << "." << endl;

		newHero.applyBonus();
		newHero.displayStatus();

		break;
	}
	default:
		std::cout << "Invalid option. Please try again." << std::endl;
	}
}
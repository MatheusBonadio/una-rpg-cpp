#include "Character/Hero/Hero.h"
#include "Character/Hero/Class/Tank.h"
#include "Character/Enemy/Enemy.h"
#include "Items/AttackItems/AttackBoostItem.h"
#include "Items/DefenseItems/DefenseBoostItem.h"
#include "Items/Potions/HealingItem.h"
#include "Database/FirebaseDataFetcher.h"
#include <iostream>

#include "Interface/Menu.h"
#include "Interface/Game.h"

using namespace std;

int main()
{
	Menu menu;
	Game game;
	int choice;

	while (true) {
		menu.displayMenu();
		std::cin >> choice;

		switch (choice) {
		case 1:
			game.startNewGame();
			break;
		case 2:
			game.showCredits();
			break;
		case 3:
			game.exitGame();
			return 0;  // Saia do programa
		default:
			std::cout << "\n\nInvalid option. Please try again." << std::endl;
		}
	}

	vector<string> heroDialogues = fetchIntroductionDialogues();


	////Obt�m a vers�o do banco de dados do Firebase
	float version = fetchDatabaseVersion();

	////Verifica se a vers�o foi obtida com sucesso
	if (version != -1)
	{
		cout << "Database version: " << version << endl;
	}
	else
	{
		cerr << "Failed to obtain the database version." << endl;
	}

	// Obtem os nomes das armas e coloca no vetor
	vector<string> weaponNames = fetchWeaponsNames();

	// Verifica se os dados foram obtidos com sucesso
	if (!weaponNames.empty() && !heroDialogues.empty())
	{
		cout << "Available weapons in the database:" << endl;
		for (const auto &name : weaponNames)
		{
			cout << "- " << name << endl;
		}

		cout << "\n\nDialogues:" << endl;
		for (const auto& dialogue : heroDialogues)
		{
			cout << "- " << dialogue << endl;
		}
	}
	else
	{
		cerr << "Failed to retrieve database." << endl;
	}

	Hero hero("Vitor", 0, 0, 0);
	Tank tank("Titan", 0, 0, 0);

	AttackBoostItem sword("Sword", "A sharp blade", 50, 10);
	DefenseBoostItem shield("Shield", "Protects against attacks", 30, 5);
	HealingItem potion("Potion", "Heals health", 20, 10);

	hero.addItem(&sword);
	hero.addItem(&shield);
	hero.addItem(&potion);

	cout << "\n---- Initial Status ----\n"
		<< endl;
	hero.displayStatus();

	cout << "\n---- Hero Status After Bonus ----\n"
		<< endl;
	hero.applyBonus();
	hero.displayStatus();

	cout << "\n---- Using Items ----\n"
		<< endl;
	for (Item *item : hero.getInventory())
	{
		item->use(hero);
	}

	cout << "\n---- Hero Status After Bonus ----\n"
		<< endl;
	hero.applyBonus();
	hero.displayStatus();

	cout << "\n---- Tank Initial Status ----\n"
		<< endl;
	tank.displayStatus();
	tank.applyBonus();
	cout << "\n---- Tank Status After Applying Bonus ----\n"
		<< endl;
	tank.displayStatus();

	system("pause");

	return 0;
}

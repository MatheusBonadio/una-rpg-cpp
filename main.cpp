#include "Hero.h"
#include "Tank.h"
#include "Enemy.h"
#include "AttackBoostItem.h"
#include "DefenseBoostItem.h"
#include "HealingItem.h"
#include "FirebaseDataFetcher.h"
#include <iostream>

using namespace std;

int main() {
    
    // Recebe a versão do firebase
    float version = fetchDatabaseVersion();

    // Verifica se a versão foi obtida com sucesso
    if (version != -1) {
        cout << "\nVersao da base de dados: " << version << endl;
    }
    else {
        cout << "\nFalha ao obter a versao da base de dados." << endl;
    }

    // Obtém os nomes das armas disponíveis no firebase
    std::vector<std::string> weaponNames = fetchWeaponsNames();

    // Verifica se os nomes das armas foram obtidos com sucesso
    if (!weaponNames.empty()) {
        std::cout << "Armas disponiveis no BD:" << std::endl;
        for (const auto& name : weaponNames) {
            std::cout << "- " << name << std::endl;
        }
    }
    else {
        std::cerr << "Falha ao obter os nomes das armas." << std::endl;
    }



    Hero hero("Vitor", 0, 0, 0);
    Tank tank("Titan", 0, 0, 0);
    
    
    AttackBoostItem sword("Sword", "A sharp blade", 50, 10);
    DefenseBoostItem shield("Shield", "Protects against attacks", 30, 5);
    HealingItem potion("Potion", "Heals health", 20, 10);

   
    hero.addItem(&sword);
    hero.addItem(&shield);
    hero.addItem(&potion);


    cout << "\n---- Initial Status ----\n" << endl;
    hero.displayStatus();

   
    cout << "\n---- Hero Status After Bonus ----\n" << endl;
    hero.applyBonus();
    hero.displayStatus();


    cout << "\n---- Using Items ----\n" << endl;
    for (Item* item : hero.getInventory()) {
        item->use(hero);
    }


    cout << "\n---- Hero Status After Bonus ----\n" << endl;
    hero.applyBonus();
    hero.displayStatus();

    cout << "\n---- Tank Initial Status ----\n" << endl;
    tank.displayStatus();
    tank.applyBonus();
    cout << "\n---- Tank Status After Applying Bonus ----\n" << endl;
    tank.displayStatus();

    return 0;
}

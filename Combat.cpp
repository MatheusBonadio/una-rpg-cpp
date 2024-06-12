#include "Combat.h"
#include <iostream>
#include <iomanip> // for setw

using namespace std;

void Combat::combatTurn(BaseCharacter& player, BaseCharacter& enemy) {
    int round = 1; // Para rastrear o número de rodadas



    // ****************************************************************************
    // ****************************************************************************
    // ****************************************************************************
    // ****************************************************************************
    // ****************************************************************************
    // ****************************************************************************
    // ****************************************************************************
    // ****************************************************************************
    // SÓ SETAR A VIDA DO INIMIGO PARA ENTRAR NO LOOP, ELE JÁ ESTAVA ENTRANDO MORTO
    enemy.setHealth(100);



    //Só para debug
    //cout << "After " << enemy.getName() << " attacks: " << endl;
    //cout << player.getName() << " Hero is alive?: " << player.isAlive() << endl;
    //cout << enemy.getName() << " Enemy is alive?: " << enemy.isAlive() << endl << endl;

    cout << "Combat turn initiated between " << player.getName() << " and " << enemy.getName() << endl;

    while (player.isAlive() && enemy.isAlive()) {
        cout << "\n---- Round " << round << " ----" << endl;

        cout << "Pressione Enter para atacar..." << endl;
        cin.get(); // Aguardar o usuário pressionar Enter

        // Player attacks enemy
        cout << player.getName() << " attacks " << enemy.getName() << endl;
        player.attack(enemy);
        cout << "After attack, " << enemy.getName() << " is alive: " << enemy.isAlive() << endl;

        if (enemy.isAlive()) {
            // Enemy attacks player
            cout << "Pressione Enter para atacar..." << endl;
            cin.get(); // Aguardar o usuário pressionar Enter

            cout << enemy.getName() << " attacks " << player.getName() << endl;
            enemy.attack(player);
            cout << "After attack, " << player.getName() << " is alive: " << player.isAlive() << endl;
        }

        // Exibir status após cada rodada de ataques
        cout << "\n---- Status Apos Rodada de Ataques ----" << endl;
        player.displayStatus();
        enemy.displayStatus();

        round++;
    }


    //Só para debug
   // cout << "After " << enemy.getName() << " attacks: " << endl;
   // cout << player.getName() << " Hero is alive?: " << player.isAlive() << endl;
   // cout << enemy.getName() << " Enemy is alive?: " << enemy.isAlive() << endl;



    cout << "\n=============================================\n";
    cout << "                  RESULTADO                  \n";
    cout << "=============================================\n";

    if (player.isAlive()) {
        cout << setw(20) << player.getName() << " venceu o combate!\n";
    }
    else if (enemy.isAlive()) {
        cout << setw(20) << enemy.getName() << " venceu o combate!\n";
    }
    else {
        cout << setw(20) << "Ambos os personagens morreram. Empate!\n";
    }

    cout << "=============================================\n";

}

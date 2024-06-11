#ifndef FIREBASEDATAFETCHER_H
#define FIREBASEDATAFETCHER_H

//#include "FirebaseClient.h"
#include <string>
#include <vector>

// Declaração da função para obter a versão do banco de dados do Firebase
float fetchDatabaseVersion();

// Declaração da função para obter os nomes das armas do banco de dados do Firebase
std::vector<std::string> fetchWeaponsNames();

// Declarações para obter as falas do hero
std::vector<std::string> fetchHeroAttackDialogues();
std::vector<std::string> fetchHeroDefenceDialogues();
std::vector<std::string> fetchHeroInteractionDialogues();
std::vector<std::string> fetchHeroIntroductionDialogues();

// Declarações para obter as falas do enemy
std::vector<std::string> fetchEnemyAttackDialogues();
std::vector<std::string> fetchEnemyDefenceDialogues();
std::vector<std::string> fetchEnemyInteractionDialogues();
std::vector<std::string> fetchEnemyIntroductionDialogues();



#endif // FIREBASEDATAFETCHER_H

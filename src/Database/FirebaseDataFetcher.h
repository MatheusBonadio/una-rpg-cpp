#ifndef FIREBASEDATAFETCHER_H
#define FIREBASEDATAFETCHER_H

//#include "FirebaseClient.h"
#include <string>
#include <vector>

// Declara��o da fun��o para obter a vers�o do banco de dados do Firebase
float fetchDatabaseVersion();

// Declara��o da fun��o para obter os nomes das armas do banco de dados do Firebase
std::vector<std::string> fetchWeaponsNames();

#endif // FIREBASEDATAFETCHER_H

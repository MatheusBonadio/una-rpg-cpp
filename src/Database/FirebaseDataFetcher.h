#ifndef FIREBASEDATAFETCHER_H
#define FIREBASEDATAFETCHER_H

//#include "FirebaseClient.h"
#include <string>
#include <vector>

// Declaração da função para obter a versão do banco de dados do Firebase
float fetchDatabaseVersion();

// Declaração da função para obter os nomes das armas do banco de dados do Firebase
std::vector<std::string> fetchWeaponsNames();

#endif // FIREBASEDATAFETCHER_H

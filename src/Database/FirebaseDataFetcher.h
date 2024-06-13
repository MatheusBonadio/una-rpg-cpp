#pragma once
#include <string>
#include <vector>

// Declara��o da fun��o para obter a vers�o do banco de dados do Firebase
float fetchDatabaseVersion();

// Declara��o da fun��o para obter os nomes das armas do banco de dados do Firebase
std::vector<std::string> fetchWeaponsNames();

// Declara��es para obter as falas
std::vector<std::string> fetchAttackDialogues();
std::vector<std::string> fetchDefenceDialogues(); 
std::vector<std::string> fetchInteractionDialogues();
std::vector<std::string> fetchIntroductionDialogues();

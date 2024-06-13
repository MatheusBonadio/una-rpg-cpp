#pragma once
#include <string>
#include <vector>

// Declaração da função para obter a versão do banco de dados do Firebase
float fetchDatabaseVersion();

// Declaração da função para obter os nomes das armas do banco de dados do Firebase
std::vector<std::string> fetchWeaponsNames();

// Declarações para obter as falas
std::vector<std::string> fetchAttackDialogues();
std::vector<std::string> fetchDefenceDialogues(); 
std::vector<std::string> fetchInteractionDialogues();
std::vector<std::string> fetchIntroductionDialogues();

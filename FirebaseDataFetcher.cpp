#include "FirebaseDataFetcher.h"
#include <iostream>
#include "../../teste-cpp-firebase/firebaseClient.h"

// Função que usa FirebaseClient para obter a versão do banco de dados do Firebase
float fetchDatabaseVersion() {
    FirebaseClient firebaseClient;
    std::string url = "https://una-rpg-default-rtdb.firebaseio.com/Version/data_base_version.json";
    return firebaseClient.getFloatValue(url);
}

// Função que usa FirebaseClient para obter os nomes das armas do Firebase
std::vector<std::string> fetchWeaponsNames() {
    FirebaseClient firebaseClient;
    std::string url = "https://una-rpg-default-rtdb.firebaseio.com/Weapons.json";
    nlohmann::json weaponsJSON = firebaseClient.getJSONValue(url);

    std::vector<std::string> weaponNames;

    // Verifica se o JSON retornado é nulo
    if (weaponsJSON.is_null()) {
        std::cerr << "Erro: JSON recebido é nulo." << std::endl;
        return weaponNames; // Retorna vazio em caso de erro
    }

    // Exibe o JSON recebido para depuração
    std::cout << "\nJSON recebido: " << weaponsJSON.dump(4) << std::endl;

    // Percorre o JSON para extrair os nomes das armas
    // Separa a Chava do Valor
    for (auto& weapon : weaponsJSON.items()) {
        weaponNames.push_back(weapon.key());
    }

    return weaponNames;
}

#include "FirebaseDataFetcher.h"
#include <iostream>
#include "firebaseClient.h"

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
        std::cerr << "Error: Received JSON is null." << std::endl;
        return weaponNames; // Retorna vazio em caso de erro
    }

    // Exibe o JSON recebido para depuração
    //std::cout << "\nJSON recebido: " << weaponsJSON.dump(4) << std::endl;

    // Percorre o JSON para extrair os nomes das armas
    // Separa a Chava do Valor
    for (auto& weapon : weaponsJSON.items()) {
        weaponNames.push_back(weapon.key());
    }

    return weaponNames;
}

std::vector<std::string> fetchAttackDialogues() {
    FirebaseClient firebaseClient;
    std::string url = "https://una-rpg-default-rtdb.firebaseio.com/Hero/dialogue/attack.json";
    nlohmann::json dialoguesJSON = firebaseClient.getJSONValue(url);

    std::vector<std::string> dialogues;

    // Verifica se o JSON retornado é nulo
    if (dialoguesJSON.is_null()) {
        std::cerr << "Error: Received JSON is null." << std::endl;
        return dialogues; // Retorna vazio em caso de erro
    }

    // Exibe o JSON recebido para depuração
    // std::cout << "\nJSON recebido: " << dialoguesJSON.dump(4) << std::endl;

    // Percorre o JSON para extrair as falas
    for (auto& dialogue : dialoguesJSON) {
        if (dialogue.is_string()) {
            dialogues.push_back(dialogue.get<std::string>());
        }
        else {
            std::cerr << "Error: Dialogue entry is not a string." << std::endl;
        }
    }

    return dialogues;
}


std::vector<std::string> fetchDefenceDialogues() {
    FirebaseClient firebaseClient;
    std::string url = "https://una-rpg-default-rtdb.firebaseio.com/Hero/dialogue/defense.json";
    nlohmann::json dialoguesJSON = firebaseClient.getJSONValue(url);

    std::vector<std::string> dialogues;

    // Verifica se o JSON retornado é nulo
    if (dialoguesJSON.is_null()) {
        std::cerr << "Error: Received JSON is null." << std::endl;
        return dialogues; // Retorna vazio em caso de erro
    }

    // Exibe o JSON recebido para depuração
    // std::cout << "\nJSON recebido: " << dialoguesJSON.dump(4) << std::endl;

    // Percorre o JSON para extrair as falas
    for (auto& dialogue : dialoguesJSON) {
        if (dialogue.is_string()) {
            dialogues.push_back(dialogue.get<std::string>());
        }
        else {
            std::cerr << "Error: Dialogue entry is not a string." << std::endl;
        }
    }

    return dialogues;
}


std::vector<std::string> fetchInteractionDialogues() {
    FirebaseClient firebaseClient;
    std::string url = "https://una-rpg-default-rtdb.firebaseio.com/Hero/dialogue/interaction.json";
    nlohmann::json dialoguesJSON = firebaseClient.getJSONValue(url);

    std::vector<std::string> dialogues;

    // Verifica se o JSON retornado é nulo
    if (dialoguesJSON.is_null()) {
        std::cerr << "Error: Received JSON is null." << std::endl;
        return dialogues; // Retorna vazio em caso de erro
    }

    // Exibe o JSON recebido para depuração
    // std::cout << "\nJSON recebido: " << dialoguesJSON.dump(4) << std::endl;

    // Percorre o JSON para extrair as falas
    for (auto& dialogue : dialoguesJSON) {
        if (dialogue.is_string()) {
            dialogues.push_back(dialogue.get<std::string>());
        }
        else {
            std::cerr << "Error: Dialogue entry is not a string." << std::endl;
        }
    }

    return dialogues;
}


std::vector<std::string> fetchIntroductionDialogues() {
    FirebaseClient firebaseClient;
    std::string url = "https://una-rpg-default-rtdb.firebaseio.com/Hero/dialogue/introduction.json";
    nlohmann::json dialoguesJSON = firebaseClient.getJSONValue(url);

    std::vector<std::string> dialogues;

    // Verifica se o JSON retornado é nulo
    if (dialoguesJSON.is_null()) {
        std::cerr << "Error: Received JSON is null." << std::endl;
        return dialogues; // Retorna vazio em caso de erro
    }

    // Exibe o JSON recebido para depuração
    // std::cout << "\nJSON recebido: " << dialoguesJSON.dump(4) << std::endl;

    // Percorre o JSON para extrair as falas
    for (auto& dialogue : dialoguesJSON) {
        if (dialogue.is_string()) {
            dialogues.push_back(dialogue.get<std::string>());
        }
        else {
            std::cerr << "Error: Dialogue entry is not a string." << std::endl;
        }
    }

    return dialogues;
}

#ifndef FIREBASECLIENT_H
#define FIREBASECLIENT_H

#include <string>
#include <nlohmann/json.hpp> // Adicione esta linha para incluir a biblioteca JSON

class FirebaseClient {
public:
    FirebaseClient();  // Construtor
    ~FirebaseClient(); // Destrutor

    // Método para obter um valor float a partir de uma URL do Firebase
    float getFloatValue(const std::string& url);

    // Método para obter um valor string a partir de uma URL do Firebase
    std::string getStringValue(const std::string& url);

    // Método para obter JSON a partir de uma URL do Firebase
    nlohmann::json getJSONValue(const std::string& url);

private:
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* s);
};

#endif // FIREBASECLIENT_H

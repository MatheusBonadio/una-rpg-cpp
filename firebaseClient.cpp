#include "FirebaseClient.h"
#include <curl/curl.h>
#include <iostream>
#include <nlohmann/json.hpp>

FirebaseClient::FirebaseClient() {
    curl_global_init(CURL_GLOBAL_DEFAULT);
}

FirebaseClient::~FirebaseClient() {
    curl_global_cleanup();
}

size_t FirebaseClient::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* s) {
    size_t newLength = size * nmemb;
    try {
        s->append((char*)contents, newLength);
    }
    catch (std::bad_alloc& e) {
        return 0;
    }
    return newLength;
}

float FirebaseClient::getFloatValue(const std::string& url) {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
            curl_easy_cleanup(curl);
            return -1;
        }

        curl_easy_cleanup(curl);

        try {
            return std::stof(readBuffer);
        }
        catch (const std::invalid_argument& ia) {
            std::cerr << "Erro ao converter resposta para float: " << ia.what() << std::endl;
        }
        catch (const std::out_of_range& oor) {
            std::cerr << "Resposta fora do intervalo para float: " << oor.what() << std::endl;
        }
    }

    return -1;
}

std::string FirebaseClient::getStringValue(const std::string& url) {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
            curl_easy_cleanup(curl);
            return "";
        }

        curl_easy_cleanup(curl);
    }

    return readBuffer;
}

nlohmann::json FirebaseClient::getJSONValue(const std::string& url) {
    std::string response = getStringValue(url);
    try {
        return nlohmann::json::parse(response);
    }
    catch (nlohmann::json::parse_error& e) {
        std::cerr << "Erro ao analisar JSON: " << e.what() << std::endl;
        std::cerr << "Resposta recebida: " << response << std::endl; // Adicionando depuração
        return nullptr;
    }
}

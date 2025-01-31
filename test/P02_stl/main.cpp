#include <iostream>
#include <vector>
#include <algorithm> // Per sort()

#include <random>

#include <map>

int main() {
    // Dichiarazione di una mappa che associa stringhe (chiavi) a interi (valori)
    std::map<std::string, int> rubrica;

    // Inserimento di elementi
    rubrica["Mario"] = 123456789;
    rubrica["Luigi"] = 987654321;
    rubrica["Peach"] = 555666777;

    // Accesso a un elemento
    std::cout << "Numero di Mario: " << rubrica["Mario"] << std::endl;

    // Iterazione sulla mappa
    std::cout << "Rubrica telefonica:\n";
    for (const auto& [nome, numero] : rubrica) {
        std::cout << nome << " -> " << numero << std::endl;
    }

    // Ricerca di un elemento
    std::string nomeDaCercare = "Luigi";
    auto it = rubrica.find(nomeDaCercare);
    if (it != rubrica.end()) {
        std::cout << nomeDaCercare << " trovato: " << it->second << std::endl;
    } else {
        std::cout << nomeDaCercare << " non trovato\n";
    }

    return 0;

}

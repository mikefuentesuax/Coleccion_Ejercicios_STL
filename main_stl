#include <vector>
#include <map>
#include <set>
#include <iostream>

int main() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);  // Agrega el número 6 al final del vector

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25;      // Asigna la edad de Juan a 25
    edad.erase("Juan");     // Elimina la entrada correspondiente a Juan en el mapa

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);     // Inserta el número 6 en el conjunto
    conjunto.erase(1);      // Elimina el número 1 del conjunto

    // Imprimir los resultados para verificar
    std::cout << "Vector:";
    for (const auto& num : numeros) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    std::cout << "Mapa:";
    for (const auto& par : edad) {
        std::cout << " {" << par.first << ": " << par.second << "}";
    }
    std::cout << std::endl;

    std::cout << "Set:";
    for (const auto& num : conjunto) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}

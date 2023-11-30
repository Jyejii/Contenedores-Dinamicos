#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());
    std::cout << "Vector ordenado: ";
    for (const auto& num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    auto max_element_iter = std::max_element(numeros.begin(), numeros.end());

    if (max_element_iter != numeros.end()) {
        std::cout << "El elemento mas grande del vector es: " << *max_element_iter << std::endl;
    } else {
        std::cout << "El vector está vacío." << std::endl;
    }

    return 0;
}


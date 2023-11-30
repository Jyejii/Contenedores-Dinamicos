#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main() {
    auto cuadrado = [](int num) { return num * num; };

    auto numero = 5;

    std::cout << "Cuadrado de " << numero << ": " << cuadrado(numero) << std::endl;

    std::vector<int> numeros = {1, 2, 3, 4, 5};

    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << std::endl;

    std::unique_ptr<int> ptr(new int(10));

    std::cout << "Valor apuntado por puntero: " << *ptr << std::endl;

    return 0;
}


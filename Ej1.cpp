#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    numeros.push_back(10), numeros.push_back(20), numeros.push_back(30), numeros.push_back(40), numeros.push_back(50);

    std::cout << "Elementos del vector:" << std::endl;
    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

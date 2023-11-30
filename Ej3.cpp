#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());
    std::cout << "Vector ordenado: ";
    for (const auto& num : numeros) {
        std::cout << num << " ";


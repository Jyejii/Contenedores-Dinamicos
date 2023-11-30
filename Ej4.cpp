#include <iostream>
#include <valarray>

int main() {
    std::valarray<double> valores = {1.5, 2.5, 3.3, 4.5, 5.5};

    std::cout << "Suma: " << valores.sum() << std::endl;

    double media = valores.sum() / valores.size();
    std::cout << "Media: " << media << std::endl;

    valores += 5.5;
    std::cout << "Valores + 5.5: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    valores -= 2.5;
    std::cout << "Valores - 2.5: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    valores *= 3.3;
    std::cout << "Valores * 3.3: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    valores /= 1.5;
    std::cout << "Valores / 1.5: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}





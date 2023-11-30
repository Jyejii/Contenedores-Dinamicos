#include <iostream>
#include <list>
#include <stack>
int main() {
    std::list<double> numeros = {1.5, 2.7, 3.8, 4.2, 5.1};
    std::stack<double, std::list<double>> pila(numeros);
    std::cout << "Pila inicial:" << std::endl;
    while (!pila.empty()) {
        std::cout << pila.top() << " ";
        pila.pop();
    }
    std::cout << std::endl;
    pila.push(6.4);
    pila.push(7.9);
    std::cout << "Pila despues de push:" << std::endl;
    while (!pila.empty()) {
        std::cout << pila.top() << " ";
        pila.pop();
    }
    std::cout << std::endl;

    return 0;
}

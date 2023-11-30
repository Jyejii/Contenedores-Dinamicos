#include <iostream>//NO ME SALIO ESTE EJERCICIO Y NO HE PUSTO EL CMAKELIST PORQUE SINO EL RESTO DE EJERCICIOS DEJAN DE FUNCIONAR
#include <boost/lexical_cast.hpp>

int main() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

std::string decimalToHexadecimal(int decimal) {
    std::stringstream ss;
    ss << std::uppercase << std::hex << decimal; // Establecer std::uppercase para que las letras sean mayúsculas
    return ss.str();
}

int main() {
    int decimal;
    std::cout << "Ingrese un numero decimal: ";
    std::cin >> decimal;

    std::string hexadecimal = decimalToHexadecimal(decimal);
    std::cout << "El nmero hexadecimal equivalente es: " << hexadecimal << std::endl;

    return 0;
}


#include <iostream>

using namespace std;

string digitToWord(int digit) {
    switch (digit) {
        case 0:
            return "cero";
        case 1:
            return "uno";
        case 2:
            return "dos";
        case 3:
            return "tres";
        case 4:
            return "cuatro";
        case 5:
            return "cinco";
        case 6:
            return "seis";
        case 7:
            return "siete";
        case 8:
            return "ocho";
        case 9:
            return "nueve";
        default:
            return "";
    }
}

string numberToWords(int number) {
    if (number == 0) {
        return "cero";
    }

    string words = "";

    if (number < 0) {
        words = "menos ";
        number = -number;
    }

    while (number > 0) {
        int digit = number % 10;
        words = digitToWord(digit) + " " + words;
        number /= 10;
    }

    return words;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    string palabras = numberToWords(numero);
    cout << "El numero en palabras es: " << palabras << endl;

    system("pause");
}


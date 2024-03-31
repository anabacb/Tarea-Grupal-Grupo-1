#include <iostream>

using namespace std;

int longitudCadena(const char* cadena) {
    int longitud = 0;
    while (*cadena != '\0') {
        longitud++;
        cadena++;
    }
    return longitud;
}

bool esPalindromo(const char* cadena) {
    int longitud = longitudCadena(cadena);
    int i = 0;
    int j = longitud - 1;

    while (i < j) {
        if (cadena[i] != cadena[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char entrada[100];
    cout << "Ingrese una palabra o numero: ";
    cin >> entrada;

    if (esPalindromo(entrada)) {
        cout << entrada << " es un palindromo." << endl;
    } else {
        cout << entrada << " no es un palindromo." << endl;
    }

    system("pause");
}



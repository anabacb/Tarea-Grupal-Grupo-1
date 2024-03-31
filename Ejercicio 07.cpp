#include <iostream>
#include <string>

using namespace std;

string convertirNumero(int num) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};

    string resultado;

    if (num % 10 != 0 || num == 0) {
        resultado = unidades[num % 10];
    }

    if (num >= 10 && num < 20) {
        resultado = especiales[num % 10];
    } else if (num >= 20 && num < 100) {
        resultado = decenas[num / 10];
        if (num % 10 != 0) {
            resultado += " y " + unidades[num % 10];
        }
    }

    return resultado;
}

int main() {
    double numero;
    cout << "Ingrese un numero entero con decimales: ";
    cin >> numero;

    int parte_entera = static_cast<int>(numero);
    int parte_decimal = static_cast<int>((numero - parte_entera) * 100);

    string en_palabras = convertirNumero(parte_entera);

    cout << "El numero con decimales en palabras es: " << en_palabras << " " <<  parte_decimal << "/100" << endl;

    system("pause");
}


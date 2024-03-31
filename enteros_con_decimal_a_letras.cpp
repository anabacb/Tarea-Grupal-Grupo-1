#include <iostream>
#include <string>

using namespace std;

string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince"};

// Función para convertir la parte entera de un número a letras
string convertirEnteroALetras(int numero) {
    if (numero < 10)
        return unidades[numero];
    else if (numero < 16)
        return especiales[numero - 10];
    else if (numero < 20)
        return "dieci" + unidades[numero - 10];
    else if (numero < 100)
        return decenas[numero / 10] + ((numero % 10 != 0) ? " y " + unidades[numero % 10] : "");
    else
        return "Numero fuera de rango";
}

// Función para convertir la parte decimal de un número a letras
string convertirDecimalALetras(int numero) {
    if (numero < 10)
        return unidades[numero];
    else
        return "Numero fuera de rango";
}

int main() {
    double numero;
    
    cout << "Ingrese un numero decimal: ";
    cin >> numero;
    
    int parte_entera = static_cast<int>(numero); // Obtener la parte entera
    int parte_decimal = static_cast<int>((numero - parte_entera) * 100); // Obtener la parte decimal
    
    cout << "Parte entera: " << convertirEnteroALetras(parte_entera) << endl;
    cout << "Parte decimal: " << convertirDecimalALetras(parte_decimal) << endl;
    
    return 0;
}

 


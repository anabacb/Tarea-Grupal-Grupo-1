#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
    int edad;
    string cargo;

public:
    Empleado() {}

    void ingresarDatos() {
        cout << "Ingrese el nombre del empleado: ";
        getline(cin, nombre); // Leer toda la línea, incluyendo espacios
        cout << "Ingrese la edad del empleado: ";
        cin >> edad;
        cout << "Ingrese el cargo del empleado: ";
        cin.ignore(); // Limpiar el buffer de entrada
        getline(cin, cargo); // Leer toda la línea, incluyendo espacios
    }

    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    string getCargo() const {
        return cargo;
    }
};

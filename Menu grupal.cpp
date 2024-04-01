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


class GestionEmpleados {
private:
    vector<Empleado> empleados;

public:
    void agregarEmpleado(const Empleado& empleado) {
        empleados.push_back(empleado);
    }

    void mostrarEmpleados() const {
        cout << "Lista de empleados:" << endl;
        for (size_t i = 0; i < empleados.size(); ++i) {
            const Empleado& empleado = empleados[i];
            cout << "Nombre: " << empleado.getNombre() << ", Edad: " << empleado.getEdad() << ", Cargo: " << empleado.getCargo() << endl;
        }
    }
};

int main() {
    GestionEmpleados gestion;

    int cantidadEmpleados;
    cout << "Ingrese la cantidad de empleados que desea agregar: ";
    cin >> cantidadEmpleados;
    cin.ignore(); // Limpiar el buffer de entrada

    for (int i = 0; i < cantidadEmpleados; ++i) {
        cout << "\nEmpleado #" << i + 1 << ":" << endl;
        Empleado emp;
        emp.ingresarDatos();
        gestion.agregarEmpleado(emp);
    }

    // Mostrar la lista de empleados
    gestion.mostrarEmpleados();

    return 0;
}


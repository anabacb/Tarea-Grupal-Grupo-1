#include <iostream>
using namespace std;

int main() {
    int saldo = 5500; 
    int opcion, cantidad;

    cout << "Menu ATM:\n";
    cout << "1. Ver saldo\n";
    cout << "2. Depositar\n";
    cout << "3. Retirar\n";
    cout << "Ingresa la opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "El saldo es: Q" << saldo << endl;
            break;
        case 2:
            cout << "Cantidad del deposito: ";
            cin >> cantidad;
            saldo += cantidad;
            cout << "El nuevo saldo es: Q" << saldo << endl;
            break;
        case 3:
            cout << "Cantidad a retirar: ";
            cin >> cantidad;
            if (cantidad <= saldo) {
                saldo -= cantidad;
                cout << "Tu nuevo saldo es: Q" << saldo << endl;
            } else {
                cout << "Tus fondos son insuficientes\n";
            }
            break;
        default:
            cout << "Seleccion invalida\n";
    }
    system("pause");
}

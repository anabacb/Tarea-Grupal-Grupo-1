#include <iostream>
using namespace std;

// crear todas las tablas de multiplicar del 1 al 10
int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << "Tabla del " << i << endl;
        for (int j = 1; j <= 10; ++j)
            cout << i << " x " << j << " = " << i * j << "\t";
        cout << endl;
    }
    return 0;
}

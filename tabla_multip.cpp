#include <iostream>
using namespace std;
//crear una tabla de multiplicacion 
int main() {
    int n, i, j;
    cout << "Ingrese el numero para la tabla de multiplicacion: ";
    cin >> n;
    //mostrar los titulos de las columnas y filas
    cout << "\nTabla de Multiplicacion \n";
    for (i = 1; i <= 10; ++i) {
        //mostrar los numeros del eje x
        cout << i << " * ";
        //mostrar los valores en cada columna
        for (j = 1; j <= 10; ++j)
            //imprimir un espacio entre cada valor
            cout << j*i << "     ";
        //salto de linea despues de mostrar todos los valores de una fila
        cout << endl;
    }
    return 0;
}

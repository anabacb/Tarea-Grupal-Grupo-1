#include <iostream>

using namespace std;

int main() {
	
    int num;
    int arabigos[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string roman = "";
    
	cout << "Ingrese un numero arabigo: ";
    cin >> num;

    if (num < 1 || num > 3999) {
        cout << "Número fuera de rango"<<endl;
        return 1;
    }

    for (int i = 0; i < 13; ++i) {
        while (num >= arabigos[i]) {
            roman += romanos[i];
            num -= arabigos[i];
        }
    }

    cout << "El numero a Romano es: " << roman << endl;

    system("Pause");
}


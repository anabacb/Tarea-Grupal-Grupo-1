#include <iostream>
using namespace std;

int main() {
	
	int a;
	cout << "Ingrese el valor: ";
	cin >> a;
	
	if (a % 2 == 0) {
		cout << "El Numero es PAR"<<endl;
	} 
	else {
		cout << "El Numero es IMPAR"<<endl;
	}
	
	system("pause");
}

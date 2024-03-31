#include <iostream>
using namespace std;

main(){
	cout<<"Hola, por favor escoge una figura geometrica:"<<endl;
	int op;
	for(;;){
	cout<<"Ingresa la opcion: \n";
	cout<<"1.triangulo \n";
	cout<<"2.cuadrado \n";
	cout<<"3.rectangulo \n";
	cin>>op;
	switch (op){
		case 1:{
			cout<<"      /    \\ \n";
			cout<<"     /      \\ \n";
			cout<<"    /        \\ \n";
			cout<<"   /          \\ \n";
			cout<<"  /____________\\ \n\n";
			break;
		}
		case 2:{
			cout<<"* * * * * * \n";
			cout<<"*         * \n";
			cout<<"*         * \n";
			cout<<"*         * \n";
			cout<<"*         * \n";
			cout<<"* * * * * * \n\n";
			break;
		}
		case 3:{
			cout<<"* * * * * * * * \n";
			cout<<"*             * \n";
			cout<<"*             * \n";
			cout<<"*             * \n";
			cout<<"* * * * * * * * \n\n";
			break;
		}
	}
	}
}

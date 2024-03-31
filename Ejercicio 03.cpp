#include<iostream>
using namespace std;
main(){
	int valor, menu;
	float KaM, MaP, LaK;
	float MaK, PaM, KaL;
	
	cout<<"-----Menu-----"<<endl;
	cout<<"1. Convertir de Kilometros a Millas"<<endl;
	cout<<"2. Convertir de Metros a Pulgadas"<<endl;
	cout<<"3. Convertir de Libras a Kilos"<<endl;
	
	cout<<"4. Convertir de Millas a Kilometros"<<endl;
	cout<<"5. Convertir de Pulgadas a Metros"<<endl;
	cout<<"6. Convertir de Kilos a Libras"<<endl;
	cin>>menu;
	
	switch(menu){
		case 1:
		cout<<"Ingrese el valor a convertir: ";
		cin>>valor;
		KaM=valor*0.621371;
		cout<<"El valor en KM a Millas es: "<<KaM<<endl;
		return 0;
			
		case 2:
		cout<<"Ingrese el valor a convertir: ";
		cin>>valor;
		MaP=valor*39.3701;
		cout<<"El valor de Metros a pulgadas es: "<<MaP<<endl;
		return 0;
			
		case 3:
		cout<<"Ingrese el valor a convertir: ";
		cin>>valor;
		LaK=valor*0.453592;
		cout<<"El valor de Libras a Kilos es: "<<LaK<<endl;
		return 0;
			
		case 4:
		cout<<"Ingrese el valor a convertir: ";
		cin>>valor;	
		MaK = valor*1.60934;
		cout<<"El valor en Millas a KM es: "<<MaK<<endl;
		return 0;
			
		case 5:
		cout<<"Ingrese el valor a convertir: ";
		cin>>valor;
		PaM=valor/39.3701;
		cout<<"El valor de Pulgadas a Metros es: "<<PaM<<endl;
		return 0;
			
		case 6:
		cout<<"Ingrese el valor a convertir: ";
		cin>>valor;
		KaL=valor*2.20462;
		cout<<"El valor de Kilos a Libras es: "<<KaL<<endl;
		return 0;
			
	}
	
	
	
	
	system("pause");
}

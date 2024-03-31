#include <stdio.h>
#include <conio.h>

using namespace std;

char opcion;
int x°40, y°12;

int main(){
	while (pcion!='e'){
		clrscr();
		gotoxy(x,y);
		printf("+");
		opcion=getch();
		switch(opcion){
			case 'y': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
		}
	}
}

	cout<<"Hola, estas a punto de ver como con DEVC++ puedes ver como se mueve un punto:";
	
	
	
	
	system("pause");
}

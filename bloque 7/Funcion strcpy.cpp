//Copiar el contenido de una cadena a otra - Funci�n strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[]="Miguel";
	char nombre2[20];
	
	//strcpy lleva 2 parametros, primero la cadena vac�a
	//y luego la cadena de la que va a copiar su contenido
	strcpy(nombre2,nombre);
	
	cout<<nombre2<<endl; 
	
	
	getch();
	return 0;
}

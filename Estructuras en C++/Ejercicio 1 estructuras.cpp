/*1. Hacer una estructura llamada corredor, en la cual se tendr�n los siguientes
campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y 
as�gnarle una categor�a de competici�n:
-Juvenil <=18 a�os
-Se�or <=40 y a�os
-Veterano >40 a�os
Posteriormente imprimir todos los datos del corredor, incluida su categor�a de
competici�n
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct corredor{
	char nombre[25];
	int edad;
	char sexo[10];
	char club[20];
} sprinter1 ;

int main(){
	cout<<"Bienvenido a programa de competicion de los corredores.";
	
	cout<<"\nPor favor, ingrese los datos que se le piden a continuacion: ";
	
	cout<<"\n\nNombre del corredor: "; gets(sprinter1.nombre);
	
	fflush(stdin);
	
	cout<<"\nEdad del corredor: "; cin>>sprinter1.edad;
	
	fflush(stdin);
	
	cout<<"\nGenero del corredor [M] o [F]: "; cin.getline(sprinter1.sexo,10,'\n');	
	
	fflush(stdin);
	
	cout<<"\nClub de competencia del corredor: "; gets(sprinter1.club);
	
	fflush(stdin);
	
	cout<<endl;
	
	if(sprinter1.edad<=18){
		cout<<"Categoria juvenil ";
		cout<<"\nNombre: "<<sprinter1.nombre;
		cout<<"\nEdad: "<<sprinter1.edad;
		cout<<"\nGenero: "<<sprinter1.sexo;
		cout<<"\nClub: "<<sprinter1.club;
	}
	
	else if(sprinter1.edad<=40){
		cout<<"Categoria senior ";
		cout<<"\nNombre: "<<sprinter1.nombre;
		cout<<"\nEdad: "<<sprinter1.edad;
		cout<<"\nGenero: "<<sprinter1.sexo;
		cout<<"\nClub: "<<sprinter1.club;
	}
	
	else{
		cout<<"Categoria veterano ";
		cout<<"\nNombre: "<<sprinter1.nombre;
		cout<<"\nEdad: "<<sprinter1.edad;
		cout<<"\nGenero: "<<sprinter1.sexo;
		cout<<"\nClub: "<<sprinter1.club;
	}
	
	cout<<"\n\nHa sido registrado con exito. \nBuena suerte."<<endl;
	
	getch();
	return 0;
}

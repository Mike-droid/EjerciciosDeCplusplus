//Paso de parámetros tipo estructura

#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}p1;

//Prototipo de las funciones
void pedirDatos();
void mostrarDatos(Persona);

int main(){
	pedirDatos();
	mostrarDatos(p1);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Ingresa tu nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout<<"Digita tu edad: ";
	cin>>p1.edad;
}

void mostrarDatos(Persona p){ //<-- Parámetro de tipo estructura
	cout<<"\n\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}

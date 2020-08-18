//Punteros a estructuras

#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}personita, *puntero_persona = &personita;
		  //la variable de tipo puntero apunta a la variable personita de tipo Persona

void pedirDatos();//Prototipo de función
void mostrarDatos(Persona *);
//le pasamos un parametro de tipo persona con puntero

int main(){
	pedirDatos();
	mostrarDatos(puntero_persona);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(puntero_persona->nombre,30,'\n');
	//puntero_persona->nombre guarda el nombre dentro del puntero
	cout<<"\nDigite su edad: ";
	//puntero_persona->edad guarda la edad dentro del puntero 
	cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){
	cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"\nSu edad es: "<<puntero_persona->edad<<endl;
}


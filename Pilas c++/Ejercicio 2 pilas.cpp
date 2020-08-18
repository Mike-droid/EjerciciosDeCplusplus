/*Ejercicio 2: Hacer un programa en C++, utilizando pilas que contenga el siguiente menú:
1. Insertar un carácter a la pila
2. Mostrar todos los elementos de la pila
3. Salir*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;	
};

void agregarEnPila(Nodo *&,char);
void sacarDePila(Nodo *&,char &);

int main(){
	Nodo *pila=NULL;
	int opcion;
	char letra;
	
	do{
		cout<<"1. Insertar un caracter a la pila"<<endl;
		cout<<"2. Mostrar todos los elementos de la pila"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"¿Que deseas hacer?: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"Digita una letra para insertarlo en la pila: ";
				cin>>letra;
				agregarEnPila(pila,letra);
				break;
			case 2:
				while(pila!=NULL){
					sacarDePila(pila,letra);
					cout<<letra<<endl;
				}
				break;
			default:
				cout<<"Opcion no valida."<<endl;
				break;
		}
	}while(opcion!=3);
	
	getch();
	return 0;
}

void agregarEnPila(Nodo *&pila, char d){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=d;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	
	cout<<"\t El elemento "<<d<<" ha sido agregado correctamente a la pila."<<endl;
}

void sacarDePila(Nodo *&pila, char &d){
	Nodo *aux=pila;
	d=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

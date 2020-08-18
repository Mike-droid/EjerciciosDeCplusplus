/*Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente menu:

	1. Insertar un caracter a una cola
	2. Mostrar todos los elementos de la cola
	3. Salir
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de funciones
void menu();
void insertarEnCola(Nodo *&,Nodo *&, char);
bool colaVacia(Nodo*);
void eliminarDeCola(Nodo *&,Nodo *&, char &);

int main(){
	menu();
	
	
	getch();
	return 0;
}


void menu(){
	Nodo *frente=NULL, *fin=NULL;
	
	int opcion;
	char dato;
	do{
		cout<<"\tMENU"<<endl;
		cout<<"1. Insertar un caracter a una cola"<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"¿Que deseas hacer?: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"\nIngrese el caracter para agregar a la cola: ";
				cin>>dato;
				insertarEnCola(frente,fin,dato);
				break;
			case 2:
				cout<<"Mostrando (y eliminando) los datos de la cola: ";
				while(frente!=NULL){
					eliminarDeCola(frente,fin,dato);
					if(frente!=NULL){
						cout<<dato<<" , ";
					}else{
						cout<<dato<<" . ";
					}
				}
				cout<<"\n";
				system("pause"); //Para que no imprima todo tan rapido
				break;
			default:
				cout<<"\nError, opcion no valida";
				break;
		}
		system("cls"); //Limpiar la pantalla
	}while(opcion!=3);
}

//Función para insertar elementos en la cola
void insertarEnCola(Nodo *&frente, Nodo *&fin, char n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if(colaVacia(frente)){
		frente=nuevo_nodo;
	}else{
		fin->siguiente=nuevo_nodo;
	}
	
	fin=nuevo_nodo;
}

//Función para determinar si la cola está vacía o no
bool colaVacia(Nodo *frente){
	return (frente==NULL)? true : false;
}

//Función para eliminar elementos de la cola
void eliminarDeCola(Nodo *&frente, Nodo *&fin, char &n){
	n=frente->dato;
	Nodo *aux=frente;
	
	if(frente==fin){
		frente=fin=NULL;
	}else{
		frente=frente->siguiente;
	}
	delete aux;
}


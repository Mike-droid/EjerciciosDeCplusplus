/*Ejercicio 1: Crear una lista que almacene "n" números enteros y calcular el menor y mayor de
ellos.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Usamos el parámetro de referencia '&' cuando vamos a cambiar de valor o agregar cosas
void insertarEnLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *); 

int main(){
	Nodo *lista = NULL;
	int dato;
	char respuesta;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarEnLista(lista,dato);//Agregando un nuevo elemento a la lista
		
		cout<<"\n¿Desea agregar otro nodo?(s/n) ";
		cin>>respuesta;
	}while(respuesta=='s' || respuesta=='S');
	
	cout<<"\nLos elementos de la lista son: "<<endl;
	mostrarLista(lista);
	
	calcularMayorMenor(lista);
	
	getch();
	return 0;
}

//Agregar elementos al final de la lista
void insertarEnLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){ //Si la lista está vacía
		lista = nuevo_nodo; //agregamos el primer elemento a la lista
	}
	else{
		aux = lista; //aux apunta al inicio de la lista
		while(aux->siguiente != NULL){ //recorrer la lista
			aux = aux->siguiente; //avanzamos posiciones en la lista
		}
		aux->siguiente = nuevo_nodo;//agrego el nuevo nodo a la lista
	}
	
	cout<<"\tElemento "<<n<<" agreado a la lista correctamente"<<endl;
}

//Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){
	while(lista != NULL){ //Mientras no sea el final de la lista
		cout<<lista->dato<<" -> ";
		lista = lista->siguiente; //Avanzamos una posición en lista 
	}
	cout<<"\n";
}

//Calcular el mayor y menor elemento de la lista
void calcularMayorMenor(Nodo *lista){
	int mayor=-1, menor=99999;
	
	while(lista != NULL){//recorremos la lista
		if((lista->dato) > mayor){ //calculando el mayor elemento
			mayor = lista->dato;
		} 
		if((lista->dato) < menor){//calculando el menor elemento
			menor = lista->dato;
		}
		lista = lista->siguiente; //avanzamos una posición en lista
	}
	
	cout<<"\tEl mayor elemento es "<<mayor<<endl;
	cout<<"\tEl menor elemento es "<<menor<<endl;
}



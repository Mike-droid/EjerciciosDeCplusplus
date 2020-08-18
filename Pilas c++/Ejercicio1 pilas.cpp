/*Ejercicio 1 Hacer un programa para agregar números enteros a una pila, hasta que el usuario 
ya no quiera, después mostrar todos los números introducidos en la pila.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipo de función
void agregarEnPila(Nodo *&,int);
void sacarDePila(Nodo *&,int &);

int main(){
	Nodo *pila=NULL;
	int dato;
	char resp;
	do{
		cout<<"Digita un numero: ";
		cin>>dato;
		agregarEnPila(pila,dato);
		
		cout<<"\n¿Quieres agregar otro elemento a pila?(s/n) : ";
		cin>>resp;
	}while((resp=='S')||(resp=='s'));
	
	cout<<"\nSacando todos los elementos de pila: ";
	while(pila!=NULL){ //Mientras no sea el final de la pila
		sacarDePila(pila,dato);
		if(pila!=NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<" . ";
		}
	}
	
	getch();
	return 0;
}

void agregarEnPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	
	cout<<"\t El elemento "<<n<<" ha sido agregado a pila correctamente.";
}

void sacarDePila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

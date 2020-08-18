//Quitar elementos en la pila

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente; //puntero
};

void agregarPila(Nodo *&,int);//Prototipo
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila=NULL;
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"Digite otro numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"\nSacando los elementos de la pila: ";
	while(pila != NULL){ //Mientras no sea el final de la pila
		sacarPila(pila,dato);
		if(pila!=NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo(); //Reservar memoria para un nodo
	nuevo_nodo->dato=n; //Igualar el dato que el usuario está enviando
	nuevo_nodo->siguiente=pila; //Igualar el puntero a la pila
	pila = nuevo_nodo; //Igualar pila al nuevo nodo
	
	cout<<"\nElemento "<<n<<" agregado correctamente a la pila"<<endl;
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}


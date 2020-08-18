//Insertar elementos en la pila

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente; //puntero
};

void agregarPila(Nodo *&,int);//Prototipo

int main(){
	Nodo *pila=NULL;
	int n1,n2;
	
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"Digite otro numero: ";
	cin>>n2;
	agregarPila(pila,n2);
	
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




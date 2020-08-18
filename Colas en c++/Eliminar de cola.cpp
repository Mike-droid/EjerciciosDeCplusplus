//Eliminar elementos de una cola

#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void insertarEnCola(Nodo *&,Nodo *&, int);
bool estaVacia(Nodo *);
void eliminarDeCola(Nodo *&,Nodo *&, int &);
void mostrarCola(Nodo *, Nodo *, int &);

int main(){
	Nodo *frente=NULL, *fin=NULL;
	
	int numero;
	
	cout<<"Digita un numero: ";
	cin>>numero;
	insertarEnCola(frente,fin,numero);
	
	cout<<"Digita un numero: ";
	cin>>numero;
	insertarEnCola(frente,fin,numero);
	
	cout<<"Digita un numero: ";
	cin>>numero;
	insertarEnCola(frente,fin,numero);
	
	mostrarCola(frente,fin,numero);
	
	//Eliminar los elementos de la cola
	cout<<"\nEliminando los nodos de la cola: ";
	while(frente!=NULL){
		eliminarDeCola(frente,fin,numero);
		
		if(frente!=NULL){
			cout<<numero<<" , ";
		}else{
			cout<<numero<<" . ";
		}
	}
	
	
	getch();
	return 0;
}

//Función para insertar elementos a una cola
void insertarEnCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if(estaVacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente=nuevo_nodo;
	}
	
	fin=nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" insertado correctamente."<<endl;
}

//Función para determinar si la cola está vacía o no
bool estaVacia(Nodo *frente){
	return (frente==NULL)? true : false; //Operador ternario
}

void eliminarDeCola(Nodo *&frente, Nodo *&fin, int &n){
	n=frente->dato;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente=fin=NULL;
	}else{
		frente=frente->siguiente;
	}
	
	delete aux;
}

void mostrarCola(Nodo *frente, Nodo *fin, int &n){
	cout<<"Los datos almacenados en la cola son: "<<endl;
	
	int i=0;
	while(frente!=NULL){
		i++;
		n=frente->dato;
		frente=frente->siguiente;
		cout<<"\tDato ["<<i<<"]:"<<n<<endl;
	}
	cout<<endl;
	i=0;
}

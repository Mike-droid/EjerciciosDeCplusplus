//Insertar elementos de una cola

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipos de función
void insertarEnCola(Nodo *&,Nodo *&, int);
bool estaVacia(Nodo *);

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
	
	cout<<"\tElemento "<<n<<" insertado correctamente.";
}

//Función para determinar si la cola está vacía o no
bool estaVacia(Nodo *frente){
	return (frente==NULL)? true : false; //Operador ternario
	
	/*Es lo mismo que si escribieramos
	if(frente==NULL){
	return true;
	}else{
	return false;
	}
	*/
}


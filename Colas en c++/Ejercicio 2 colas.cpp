/*Ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene en cola,
y por último muestre los clientes en el orden correcto.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

struct NodoCliente{
	NodoCliente *siguiente;
	int numCuenta;
	float saldo;
	string nombre;	
};

void menu();
void insertarEnCola(NodoCliente *&,NodoCliente *&, int,float,string);
void eliminarDeCola(NodoCliente *&,NodoCliente *&, int &, float&, string &);
bool estaVacia(NodoCliente *);


int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opcion, numcuenta;
	float saldo;
	string nombre;
	NodoCliente *frente=NULL, *fin=NULL;
	
	do{
		
	cout<<"\tMENU"<<endl;
	cout<<"1.Ingresar datos del usuario del banco."<<endl;
	cout<<"2.Mostrar clientes en orden (cola)."<<endl;
	cout<<"3.Salir."<<endl;
	cout<<"Digita una opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nDigite su numero de cuenta: ";
			cin>>numcuenta;
			cout<<"\nDigite su saldo: ";
			cin>>saldo;
			cout<<"\nEscriba el nombre del cliente: ";
			cin>>nombre; //al parecer no puede haber espacios >:(
			insertarEnCola(frente,fin,numcuenta,saldo,nombre);
			break;
		case 2:
			cout<<"Mostrando (y eliminando) los datos de la cola: ";
			while(frente!=NULL){
				eliminarDeCola(frente,fin,numcuenta,saldo,nombre);
				if(frente!=NULL){
					cout<<"\nNumero de cuenta: "<<numcuenta<<"\nSaldo: "<<saldo<<"\nNombre: "<<nombre;
				}else{
					cout<<"\nUltimo: ";
					cout<<"\nNumero de cuenta: "<<numcuenta<<"\nSaldo: "<<saldo<<"\nNombre: "<<nombre;
				}
			}
			cout<<"\n";
			system("pause");
			break;
		case 3:
			cout<<"Adios.";
			break;
		default:
			cout<<"\nOpcion no valida.";
			break;
	}
		
	}while(opcion!=3);
	cout<<"\nPrograma terminado.";
	
}

void insertarEnCola(NodoCliente *&frente, NodoCliente *&fin, int cuentita, float saldito, string nombrecito){
	NodoCliente *nuevo_nodo = new NodoCliente();
	
	nuevo_nodo->numCuenta=cuentita;
	nuevo_nodo->saldo=saldito;
	nuevo_nodo->nombre=nombrecito;
	nuevo_nodo->siguiente=NULL;
	
	if(estaVacia(frente)){
		frente=nuevo_nodo;
	}else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
	
	cout<<"\nCliente agregado de manera correcta."<<endl;
}

bool estaVacia(NodoCliente *frente){
	return (frente==NULL)? true : false;
}

void eliminarDeCola(NodoCliente *&frente, NodoCliente *&fin, int &cuentita, float &saldito, string &nombrecito){
	cuentita=frente->numCuenta;
	saldito=frente->saldo;
	nombrecito=frente->nombre;
	
	NodoCliente *aux=frente;
	
	if(frente==fin){
		frente=fin=NULL;
	}else{
		frente=frente->siguiente;
	}
	delete aux;
}

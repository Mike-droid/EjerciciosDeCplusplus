//Insertando nodos en �rboles,mostrando el �rbol y buscando nodos
//tambi�n hay b�squedas pre, in y pos orden y eliminaci�n de nodos
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

//Prototipos
void menu();
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void mostrarArbol(Nodo *,int);
bool buscarNodo(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol=NULL;

int main(){
	menu();
	
	getch();
	return 0;
}

//Funci�n para crear un nuevo nodo
Nodo *crearNodo(int n, Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	nuevo_nodo->padre=padre;
	
	return nuevo_nodo;
}

//Funci�n para insertar nodos en el �rbol
void insertarNodo(Nodo *&arbol, int n,Nodo *padre){
	if(arbol==NULL){ //Si el �rbol est� vac�o
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol=nuevo_nodo;
	}else{ //Si el �rbol tiene 1 o m�s nodos
		int valorRaiz = arbol->dato; //Obtenemos el valor de la ra�z
		if(n < valorRaiz){ //Si el elemento es menor a la ra�z
			insertarNodo(arbol->izq,n,arbol); //Insertamos en el lado izquierdo
		}else{//Si el elemento es mayor a la raiz
			insertarNodo(arbol->der,n,arbol); //Insertamos en el lado derecho
		}
	}
}

void menu(){
	int dato,opcion,contador=0;
	do{
		cout<<"\tMENU"<<endl;
		cout<<"0.Salir"<<endl;
		cout<<"1.Insertar un nuevo nodo."<<endl;
		cout<<"2.Mostrar el arbol completo"<<endl;
		cout<<"3.Buscar un nodo en el arbol"<<endl;
		cout<<"4.Recorrido PreOrden"<<endl;
		cout<<"5.Recorrido InOrden"<<endl;
		cout<<"6.Recorrido PostOrden"<<endl;
		cout<<"7.Eliminar un nodo del arbol"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 0:
				cout<<"Adios";
				break;
			case 1:
				cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarNodo(arbol,dato,NULL); //Insertamos un nuevo nodo
				cout<<"\n";
				system("pause");	
				break;
				
			case 2:
				cout<<"Mostrando el arbol completo: "<<endl;
				mostrarArbol(arbol,contador);
				cout<<"\n";
				system("pause");
				break;
				
			case 3:
				cout<<"\nDigita el elemento que quieres buscar: ";
				cin>>dato;
				if(buscarNodo(arbol,dato)==true){
					cout<<"\nEl nodo "<<dato<<" ha sido encontrado en el arbol"<<endl;
				}else{
					cout<<"\nEl nodo "<<dato<<" NO fue encontrado"<<endl;
				}
				system("pause");
			break;
			
			case 4:
				cout<<"\nRecorrido en PreOrden: "<<endl;
				preOrden(arbol);
				cout<<"\n\n";
				system("pause");
				break;
				
			case 5:
				cout<<"\nRecorrido en InOrden: "<<endl;
				inOrden(arbol);
				cout<<"\n\n";
				system("pause");
			break;
			
			case 6:
				cout<<"\nRecorrido en postOrden"<<endl;
				postOrden(arbol);
				cout<<"\n\n";
				system("pause");
			break;	
			
			case 7:
				cout<<"\nDigite el nodo a eliminar: ";
				cin>>dato;
				eliminar(arbol,dato);
				cout<<"\n\n";
				system("pause");
			break;		
			
				default:
					cout<<"\nOpcion incorrecta";
					break;
		}
		system("cls"); //clear screen
	}while(opcion!=0);
}

//Funci�n para mostrar el �rbol
void mostrarArbol(Nodo *arbol, int cont){
	if(arbol==NULL){//Si el �rbol est� vac�o
		return;
	}else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0; i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}

//Funci�n para buscar el nodo
bool buscarNodo(Nodo *arbol, int n){
	if(arbol==NULL){ //Si el �rbol est� vac�o
		return false;
	}else if(arbol->dato == n){
		return true;
	}else if(n < arbol->dato){
		return buscarNodo(arbol->izq,n);
	}else{
		return buscarNodo(arbol->der,n);
	}
}

//Funci�n para recorrido preOrden
void preOrden(Nodo *arbol){
	if(arbol==NULL){ //Si el �rbol est� vac�o
		return;
	}else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

//Funci�n para recorrido inOrden
void inOrden(Nodo *arbol){
	if(arbol==NULL){ //si el �rbol est� v�cio
		return;
	}else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}

//Funci�n para recorrido postOrden
void postOrden(Nodo *arbol){
	if(arbol==NULL){ //Si el �rbol est� vac�o
		return;
	}else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

//Funci�n para eliminar 1 nodo del �rbol
void eliminar(Nodo *arbol, int n){
	if(arbol==NULL){ //Si el �rbol est� vac�o
		return; //No haces nada 
	}else if(n < arbol->dato){ //Si el valor es menor, busca por la izquierda
		eliminar(arbol->izq,n);
	}else if(n > arbol->dato){ //Si el valor es mayor, busca por la derecha
		eliminar(arbol->der,n);
	}else{ //Si ya encontraste el valor
		eliminarNodo(arbol);
	}
}

//Funci�n para determinar el nodo m�s izquierdo posible
Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){ //Si el �rbol est� vac�o
		return NULL; //retorna null
	}
	if(arbol->izq){ //Si tiene hijo izquierdo
		return  minimo(arbol->izq); //buscamos la parte m�s izquierda posible
	}else{ //Si no tiene hijo izquierdo
		return arbol; //retornamos el mismo nodo
	}
}

//Funci�n para reemplazar 2 nodos
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato==arbol->padre->izq->dato){
			arbol->padre->izq=nuevoNodo;
		}else if(arbol->dato==arbol->padre->der->dato){
			arbol->padre->der=nuevoNodo;
		}
	}
	if(nuevoNodo){
		//Procedemos a asignarle su nuevo padre
		nuevoNodo->padre=arbol->padre;
	}
}

//Funci�n para destruir un nodo
void destruirNodo(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;
	delete nodo;
}

//Funci�n para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){ //Si el nodo tiene hijo izquierdo y derecho
		Nodo *menor=minimo(nodoEliminar->der);
		nodoEliminar->dato=menor->dato;
		eliminarNodo(menor);
	}else if(nodoEliminar->izq){ //Si tiene hijo izquierdo
		reemplazar(nodoEliminar, nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}else if(nodoEliminar->der){ //Si tiene hijo derecho
		reemplazar(nodoEliminar, nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}else{ //Si es nodo hoja
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
}

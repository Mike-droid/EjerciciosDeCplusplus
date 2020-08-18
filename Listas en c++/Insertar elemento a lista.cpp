//Insertar un elemento en una lista

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de función
void insertarEnLista(Nodo *&, int);
void mostrarLista(Nodo *);
void menu();
void buscarEnLista(Nodo *,int);
void eliminarNodo(Nodo *&, int);
void eliminarLista(Nodo *&, int &);

int main(){
	menu();
	
	getch();
	return 0;
}

void insertarEnLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1){ //Entrará en el if si no entró al while
		lista = nuevo_nodo;
	}else{ //Entrará al else si entró en el while
		aux2->siguiente = nuevo_nodo;
	}
	nuevo_nodo->siguiente = aux1;
	cout<<"\t El elemento "<<n<<" ha sido insertado en la lista correctamente"<<endl;
}


void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
	
	if(lista == NULL){
		cout<<"La lista esta vacia";
	}
}

void menu(){
	Nodo *lista=NULL;
	int dato,opcion;
	
	do{	
	cout<<"\n 0. Cerrar programa.";
	cout<<"\n 1.Insertar un numero a la lista.";
	cout<<"\n 2.Mostrar lista.";
	cout<<"\n 3.Buscar un elemento de la lista";
	cout<<"\n 4.Eliminar un nodo de la lista";
	cout<<"\n 5.Dejar vacia la lista.";
	cout<<"\n Eliga una opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1: 
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarEnLista(lista,dato);
		cout<<"\n";
		system("pause");
		break;
		case 2:
		mostrarLista(lista);
		cout<<"\n";
		system("pause");
		break;
		case 0:
			cout<<"Programa terminado.";
		break;
		case 3:
			cout<<"\nDigite un numero a buscar: ";
			cin>>dato;
			buscarEnLista(lista,dato);
			system("pause");
		break;
		case 4:
			cout<<"\nDigita el elemento que quieres eliminar: ";
			cin>>dato;
			eliminarNodo(lista,dato);
			cout<<"\n";
			system("pause");
		break;
		case 5:
			while(lista != NULL)
			{
				eliminarLista(lista,dato);
			}
			cout<<"Los elementos han sido eliminados.";
			cout<<"\n";
			system("pause");
		break;
		default:
		cout<<"Opcion incorrecta";
		break;	
	}
	system("cls");
	}while(opcion != 0);
}

void buscarEnLista(Nodo *lista, int n){
	bool band = false;
	Nodo *actual = new Nodo();
	actual = lista; //Apunta a la primera posición
	
	while((actual != NULL) && (actual->dato <=n)){
		if(actual->dato == n){
			band = true;
		}
		actual = actual->siguiente;
	}
	if(band==true){
		cout<<"El elemento "<<n<<" SI ha sido encontrado en la lista.\n";
	}else{
		cout<<"El elemento "<<n<<" NO ha sido encontrado en la lista.\n";
	}
	
}

void eliminarNodo(Nodo *&lista, int n){
	//Preguntar si la lista no está vacía
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;	
		
		//Recorrer la lista
		while((aux_borrar != NULL) && (aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		//El elemento no ha sido encontrado
		if(aux_borrar == NULL){
			cout<<"El elemento "<<n<<" no ha sido encontrado."<<endl;
			}//El primer elemento es el que vamos a eliminar
			else if(anterior == NULL){
				lista = lista->siguiente;
				delete aux_borrar;
				cout<<"El elemento "<<n<<" ha sido eliminado."<<endl;
		}//El elemento está en la lista pero no es el primer nodo
		else{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
			cout<<"El elemento "<<n<<" ha sido eliminado."<<endl;
		}
	}	
}

//Dejar vacía la lista
void eliminarLista(Nodo *&lista, int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}

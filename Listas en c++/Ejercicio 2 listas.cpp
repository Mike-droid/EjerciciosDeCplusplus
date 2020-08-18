/*Ejercicio 2: Crear una lista que almacene "n" números reales y calcular su suma y promedio de
estos.*/

#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Nodo{
	float dato;
	Nodo *siguiente;
};

void insertarEnLista(Nodo *&,float);
void sumaPromedio(Nodo *);

int main(){
	Nodo *lista = NULL;
	float dato;
	char res;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarEnLista(lista,dato);
		
		cout<<"\n¿Desea ingresar otro numero?(s/n): ";
		cin>>res;
	}while(res=='s' || res=='S');
	
	sumaPromedio(lista);
	
	getch();
	return 0;
}

void insertarEnLista(Nodo *&lista, float n){
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

void sumaPromedio(Nodo *lista){
	float suma=0, promedio=0;
	int i=0;
	
	while(lista!=NULL){
		suma += lista->dato;
		i++;
		lista=lista->siguiente;
	}
	promedio=suma/i;
	
	cout<<"\tLa suma total es: "<<suma<<endl;
	cout<<"\tEl promedio total es: "<<promedio<<endl;
}

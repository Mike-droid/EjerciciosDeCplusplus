/* Ejercicio 6: Hacer una funci�n para almacenar N n�meros en un arreglo din�mico, posteriormente
en otra funci�n buscar un n�mero en particular.
NOTA: Puedes utilizar cualquier m�todo de b�squeda (Secuencial o Binaria)*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> //new y delete
using namespace std;

void pedirDatos();
void buscarNumero(int *, int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	buscarNumero(elemento,nElementos);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamanio del arreglo: ";
	cin>>nElementos;
	
	elemento = new int [nElementos];
	
	for(int i=0; i<nElementos; i++){
		cout<<"Digite el numero ["<<i<<"]: ";
		cin>>*(elemento+i);
	}
}

void buscarNumero(int *elemento, int nElementos){
	int i=0;
	char band='F';
	int x=0;
	
	cout<<"Digite el numero que desea buscar: ";
	cin>>x;
	
	while((band=='F')&&(i<nElementos)){
		if(*(elemento+i)==x){
			band='V';
		}
		i++;
	}
	
	if(band=='F'){
		cout<<"El numero a buscar no existe en el arreglo."<<endl;
	} else if(band=='V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;
	}	
}





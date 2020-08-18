//Búsqueda binaria - El arreglo debe estar arreglado en orden ascendente

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={1,2,3,4,5,6,7,8,9,10};
	int inf,sup,mitad,dato;
	char band='F';
	
	dato=7;
	
	//Algoritmo de la búsqueda binaria
	inf=0; 
	sup=10; //numero de elementos en el arreglo
	
	while((inf+1)!=sup){
		mitad=(inf+sup)/2;
		
		if(numeros[mitad]==dato){
			band='V';
			break;
		}
		if(numeros[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(numeros[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
	}
	
	if(band=='V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
	}
	else{
		cout<<"El numero no ha sido encontrado.";
	}
	
	getch;
	return 0;
}

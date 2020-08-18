//Método Burbuja

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={20,21,93,48,51,12,1,2,60,47};
	int i,j,aux;
	
	//Algoritmo del método burbuja
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(numeros[j]>numeros[j+1]){
				aux = numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<10;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=9;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}

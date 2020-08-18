/*Ejercicio 16: Realice una función que dada una matriz y un número de filas
de la matriz devuelva el menor de los elementos almacenados en dicha fila.*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();

int m[100][100], filas,columnas;

void menor(int m[][100],int,int);

int main(){
	pedirDatos();
	menor(m,filas,columnas);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digita el numero de filas: ";
	cin>>filas;
	cout<<"\nDigita el numero de columnas: ";
	cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0; j<columnas;j++){
			cout<<"Ingresa un numero: ";
			cin>>m[i][j];
		}
	}
}

void menor(int m[][100],int filas,int columnas){
	int chiquito=0;
	
	for(int i=0; i<filas;i++){
		cout<<"\n";
		for(int j=0; j<columnas;j++){
			cout<<m[i][j]<<" ";
		if(m[i][j]<m[i-1][j-1]){
			chiquito=m[i][j];	
		}
		}
	}
	 cout<<"\nEl menor numero es "<<chiquito;
}

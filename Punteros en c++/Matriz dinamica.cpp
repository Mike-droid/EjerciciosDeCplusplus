/*Matrices dinámicas

Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int]
					*puntero_fila -> [int] [int]
					*puntero_fila -> [int] [int] 
					
1 2 3		1 -> 2 3
4 5 6		4 -> 5 6
7 8 9		7 -> 8 9				

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> //new y delete
using namespace std;

//Prototipo de función
void pedirDatos();
void mostrarMatriz(int **,int,int); 
//Los parametros para mostrar la matriz
//son el puntero de tipo matriz,numero de filas,numero de columnas

//Un puntero que apunta a otro puntero, en este caso 
//el primer puntero apunta a la columna de la matriz (1,4,7) y a su vez
//el 1 señala a la fila que contiene 2 y 3 y así con los demás
//el primero puntero es *puntero_fila y el segundo es **puntero_matriz
//Siempre que veamos un puntero con 2 astericos es que señala a una matriz

//Variables de tipo global
int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	//Liberar la memoria que hemos utilizado en la matriz
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digita el numero de filas: ";
	cin>>nFilas;
	cout<<"\nDigita el numero de columnas: ";
	cin>>nCol;
	
	
	//Reservar memoria para la matriz dinámica
	
							//debe ser tipo puntero *
	puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas
	for(int i=0; i<nFilas;i++){
		puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
	}
	
	cout<<"\nDigitando elementos de la matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0; j<nCol; j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j); // es lo mismo que puntero_matriz[i][j]
		}
	}
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	cout<<"\n\nImprimiendo matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j) <<" "; //puntero_matriz[i][j]
		}
		cout<<"\n";
	}
}

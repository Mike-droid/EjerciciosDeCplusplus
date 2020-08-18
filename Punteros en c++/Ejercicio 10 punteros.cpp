/*Ejercicio 10: Realice un programa que lea una matriz de NxM y cree su matriz traspuesta,
utilizando punteros.
NOTA: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void traspuesta(int **,int,int);

int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	traspuesta(puntero_matriz,nFilas,nCol);
	
	//Liberando memoria de la matriz
	for(int i=0; i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la cantidad de filas: ";
	cin>>nFilas;
	cout<<"\nDigite la cantidad de columnas: ";
	cin>>nCol;
	
	puntero_matriz=new int*[nFilas];
	for(int i=0; i<nFilas;i++){
		puntero_matriz[i]=new int[nCol];
	}
	
	cout<<"\nDigite los elementos de la matriz";
	for(int i=0;i<nFilas;i++){
		for(int j=0; j<nCol;j++){
			cout<<"\nDigite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
	
	cout<<"\nMostrando la matriz original\n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}

void traspuesta(int **puntero_matriz,int nFilas,int nCol){
	cout<<"\nMatriz traspuesta\n";
	
	//NOTA: es tan sencillo como mostrar la matriz original pero al revés xd
	for(int i=0;i<nCol;i++){
		for(int j=0;j<nFilas;j++){
			cout<<*(*(puntero_matriz+j)+i)<<" ";
		}
		cout<<"\n";
	}
}



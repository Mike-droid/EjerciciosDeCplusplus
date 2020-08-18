/* 4. Hacer una matriz preguntando al usuario el número de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por
último mostrarla en pantalla.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int filas=0, columnas=0;
	int matriz1[filas+2][columnas+2], matriz2[filas+2][columnas+2];
	
	srand(time(NULL));
	
	cout<<"Digite el numero de filas para la matriz: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	//Llenando la primera matriz con números aleatorios entre 10 y 100
	for(int i=0; i<columnas; i++){
		for(int j=0; j<filas; j++){
		matriz1[i][j]=10+rand()%(101-10);
		}
	}
	
	//Llenando la segunda matriz con números aleatorios entre 10 y 100
	for(int i=0; i<columnas; i++){
		for(int j=0; j<filas; j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	
	cout<<"\nMatriz 2: \n";
	for(int i=0; i<columnas; i++){
		cout<<"\n";
		for(int j=0; j<filas; j++){
			cout<<matriz2[i][j]<<" ";
		}
	}
	
	cout<<"\n";
	
	getch();
	return 0;
}

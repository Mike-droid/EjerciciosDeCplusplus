//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>
#include<conio.h>

using namespace std;

void mostrarMatriz(int m[][4], int, int);
void cuadradoM(int m[][4], int, int);
void mostrarMatrizElevada(int m[][4], int,int);

int main(){
	const int filas=2;
	const int columnas=4;
	int m[filas][columnas]={
	{1,2,3,4},
	{5,6,7,8}
	};
	
	mostrarMatriz(m,filas,columnas);
	cuadradoM(m,filas,columnas);
	mostrarMatrizElevada(m,filas,columnas);
	
	getch();
	return 0;
}

void mostrarMatriz(int m[][4], int filas, int columnas){
	cout<<"Matriz original: \n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void cuadradoM(int m[][4], int filas, int columnas){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarMatrizElevada(int m[][4], int filas, int columnas){
	cout<<"Matriz elevada al cuadrado: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

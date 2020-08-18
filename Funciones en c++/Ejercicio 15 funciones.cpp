/*Ejercicio 15: Desarrollar una función que determine si uma matriz es 
simétrica o no.

Una matriz es simetrica: A=A^t

-La matriz debe ser cuadrada
- Aij = Aji

|2 5  9|		|2 5  9 |
|5 8 -1|   ->   |2 5 -1|
|9 -1 10|      |9 -1 10|
*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void simetrica(int m[][100],int,int);

int m[100][100], filas,columnas;

int main(){
	pedirDatos();
	simetrica(m,filas,columnas);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"\nDigite el numero de columnas: ";
	cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

void simetrica(int m[][100],int filas, int columnas){
	int cont=0;
	
	if(filas!=columnas){
		cout<<"La matriz no es simetrica"<<endl;
	} else{
		for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if(m[i][j]==m[j][i]){
				cont++;
			}
		}
	}
	}
	
	if(cont==filas*columnas){
		cout<<"La matriz es simetrica";
	}else{
		cout<<"La matriz no es simetrica";
	}
	
}

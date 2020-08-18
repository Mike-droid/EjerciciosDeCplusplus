/*7. Desarrollar un programa que determine si una matriz es simétrica o no.
Una matriz es simétrica si es cuadrada y si es igual a su matriz traspuesta.

|813|		|813|
|174| -->	|174|
|349|		|349|

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int matriz[100][100], filas, columnas;
	char band='F';
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"\nDigite el numero de columnas: "; cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digita un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n";
	if(filas==columnas){
				for(int i=0; i<filas; i++){
					for(int j=0; j<columnas; j++){
						if(matriz[i][j]==matriz[j][i]){
							band='V';
						}
					}
				}
			} 
	
	if(band == 'V'){
		cout<<"La matriz es simetrica";
	} else{
		cout<<"La matriz no es simetrica";
	}
	
	getch();
	return 0;
}

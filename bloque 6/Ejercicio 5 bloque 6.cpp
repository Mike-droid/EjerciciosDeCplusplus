/*5. Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta.
La matriz traspuesta es aquella en que la columna i era la fila i de la matriz
original.

|123|		|147|
|456|  -->  |258|
|789|		|369|

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int matriz[3][3];
	int tras[3][3];
	/*	|[0,0] [0,1] [0,2]|
	    |[1,0] [1,1] [1,2]|
	    |[2,0] [2,1] [2,2]|
	
		
	cout<<"Matriz original: ";
	
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<matriz[i][j];
		}
	}
	
	tras[0][0]=matriz[0][0];
	tras[0][1]=matriz[1][0];
	tras[0][2]=matriz[2][0];
	tras[1][0]=matriz[0][1];
	tras[1][1]=matriz[1][1];
	tras[1][2]=matriz[2][1];
	tras[2][0]=matriz[0][2];
	tras[2][1]=matriz[1][2];
	tras[2][2]=matriz[2][2];
	
	cout<<"Matriz transpuesta: ";
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<tras[i][j];
		}
	}
	
	*/
	cout<<"Llenando la matriz original: ";
	cout<<"\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero: ["<<i<<"]"<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	cout<<"\nMatriz original: ";
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<" ";
		}
	}
	
	cout<<"\n\n";
	//Llenando la matriz transpuesta de los valores de la matriz original
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			tras[j][i]=matriz[i][j];
		}
	}
	
	//Mostrando la matriz transpuesta
	cout<<"Matriz transpuesta: ";
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<tras[i][j]<<" ";
		}
	}
	
	
	cout<<"\n\n";
	
	getch();
	return 0;
}

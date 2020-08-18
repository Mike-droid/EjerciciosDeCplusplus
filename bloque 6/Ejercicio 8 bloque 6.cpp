/*8. Realice un programa que calcule el producto de dos matrices cuadradas
de 3x3 .*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int matriz[3][3];
	int matriz2[3][3];
	int multi[3][3];
	
	cout<<"Llenando la primera matriz\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digita un numero ["<<i<<"[]"<<j<<"] : ";
			cin>>matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz 1: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nLlenando la segunda matriz\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digita un numero ["<<i<<"]["<<j<<"] :";
			cin>>matriz2[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz 2: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			multi[i][j]=matriz[i][j] * matriz2[i][j];
		}
	}
	
	cout<<"\nMultiplicacion de las dos matrices\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<multi[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}

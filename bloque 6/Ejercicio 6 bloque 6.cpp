/*6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int m1[3][3];
	int m2[3][3];
	int suma[3][3];
	cout<<"Llenando la primera matriz :";
	cout<<"\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m1[i][j];
		}
	}
	
	cout<<"\nMatriz 1: ";
	cout<<"\n";
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<m1[i][j]<<" ";
		}
	}
	
	cout<<"\n\nLlenando la segunda matriz :";
	cout<<"\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m2[i][j];
		}
	}
	
	cout<<"\n\nMatriz 2: ";
	cout<<"\n";
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<m2[i][j]<<" ";
		}
	}
	
	cout<<"\n\nSuma de matriz 1 y matriz 2 :";
	cout<<"\n";
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			suma[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		cout<<"\n";
		for(int j=0; j<3; j++){
			cout<<suma[i][j]<<" ";
		}
	}
	
	getch();
	return 0;
}

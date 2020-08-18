/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para
que muestre la diagonal principal de la matriz.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int matriz[3][3]{{1,2,3},
					 {4,5,6},
					 {7,8,9}};
	
	cout<<"La matriz es :"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"La diagonal principal es: "<<endl;
	
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if(matriz[i]==matriz[j]){
				cout<<matriz[i][j]<<endl;
			}
		}
	}
	
	getch();
	return 0;
}

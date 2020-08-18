/* 8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro
arreglo multiplicados por 2 y muestre el segundo arreglo.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float vector[5];
	float vector2[5];
		
	for(int i=0; i<5; i++){
		cout<<"Digita un numero para la posicion "<<i<<" :";
		cin>>vector[i]; cout<<"\n";
	}
	
	for(int i=0; i<5; i++){
		vector2[i]=vector[i]*2;
	}
	
	cout<<"El nuevo vector es :";
	cout<<"\n";
	
	for(int i=0; i<5; i++){
		cout<<vector2[i]<<endl;
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}

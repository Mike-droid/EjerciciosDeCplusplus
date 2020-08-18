/*6. Escribe un programa que defina un vector de números y calcule si existe
algún número en el vector cuyo valor equivale a la suma del resto de números
del vector.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vector[3],n, equivalente=0;
	
	for(int i=0; i<3; i++){
		cout<<i+1<<". Digita un numero: ";
		cin>>vector[i];
		equivalente+=vector[i];
	}
	
	for(int i=0; i<3; i++){
		if(vector[i]==equivalente-vector[i]){
			cout<<vector[i]<<" es igual a "<<equivalente-vector[i];
		}
	}
	cout<<endl;
	
	system("pause");
	return 0;
}

/*5. Desarrolle un programa que la de la entrada estándar un vector de enteros
y determine el mayor elemento del vector.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vector[100],n, mayor=0;
	
	cout<<"Digite el numero de elementos del vector: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<i+1<<". Digite un numero: "; //1. Digite un número:
		cin>>vector[i];
		
		if(vector[i] > mayor){
			mayor = vector[i];
		}
	}
	
	cout<<"\nEl mayor elemento del vector es "<<mayor<<endl;
	
	system("pause");	
	return 0;
}

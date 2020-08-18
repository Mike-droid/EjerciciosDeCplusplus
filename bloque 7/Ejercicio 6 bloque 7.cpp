/*6. Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas, y decir
si son iguales o no.
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char palabra1[30];
	char palabra2[30];
	
	cout<<"Escribe una palabra: ";
	gets(palabra1);
	
	cout<<"\nEscribe una segunda palabra: ";
	gets(palabra2);
	
	strupr(palabra1);
	strupr(palabra2);
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Las palabras "<<palabra1<<" y "<<palabra2<<" son iguales.";
	} else{
		cout<<"Las palabras "<<palabra1<<" y "<<palabra2<< " no son iguales.";
	}
	
	cout<<"\n";
	
	system("pause");
	return 0;
}

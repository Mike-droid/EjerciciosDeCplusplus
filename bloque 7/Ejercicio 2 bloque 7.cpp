/*2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cadena[50];
	char cadena2[50];
	
	cout<<"Escribe una palabra o frase: "<<endl;
	gets(cadena);
	
	strcpy(cadena2,cadena);
	
	cout<<"\n";
	cout<<cadena2<<endl;
	
	system("pause");
	return 0;
}

/*1. Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verificar la longitud de la cadena, y si ésta supera a 10 caracteres
mostrarla en pantalla, caso contrario no mostrarla.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char palabra[100];
	int longitud=0;
	
	cout<<"Escribe una palabra o una oracion: ";
	gets(palabra);
	
	longitud=strlen(palabra);
	
	if(longitud>10){
		cout<<"La palabra/frase tiene mas de 10 elementos."<<endl;
		cout<<palabra;
	} else{
		cout<<"La palabra/frase tiene 10 elementos o menos."<<endl;
	}
	
	
	getch();
	return 0;
}

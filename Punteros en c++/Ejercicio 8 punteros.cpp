/*Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece
la vocal a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar punteros.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirCadena();
void contarVocales(char *);

char cadena[50];

int main(){
	pedirCadena();
	contarVocales(cadena);	
	
	getch();
	return 0;
}

void pedirCadena(){
	cout<<"Escriba una palabra: ";
	cin.getline(cadena,50,'\n');
	
	strupr(cadena);
}

void contarVocales(char *cadena){
	int a=0,e=0,i=0,o=0,u=0;
	
	while(*cadena){
		switch(*cadena){
			case 'A': a++; break;
			case 'E': e++; break;
			case 'I': i++; break;
			case 'O': o++; break;
			case 'U': u++; break;
		}
		cadena++;
	}
	cout<<"\nEl total de vocales a, en la cadena, son: "<<a;
	cout<<"\nEl total de vocales e, en la cadena, son: "<<e;
	cout<<"\nEl total de vocales i, en la cadena, son: "<<i;
	cout<<"\nEl total de vocales o, en la cadena, son: "<<o;
	cout<<"\nEl total de vocales u, en la cadena, son: "<<u;
}

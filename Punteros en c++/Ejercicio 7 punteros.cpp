/* Ejercicio 7: Pedir su nombre al usuario y devolver el número de vocales que hay.
NOTA: Recuerda que debes utilizar punteros.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

//Prototipo de función
void pedirNombre();
int ContandoVocales(char *); //Posición inicial del arreglo

char nombre[30];

int main(){
	pedirNombre();
	cout<<"El numero de vocales del nombre es: "<<ContandoVocales(nombre)<<endl;
	
	//nombre = &nombre[0];
	
	getch();
	return 0;
}

void pedirNombre(){
	cout<<"Escribe tu nombre: ";
	cin.getline(nombre,30,'\n');
	
	strupr(nombre); //Transformando a MAYÚSCULA el nombre
}

int ContandoVocales(char *nombre){
	int contador=0;
	
	while(*nombre){ //Mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': contador++;
		}
		nombre++; //Esto es para recorrer todas las posiciones
	}
	return contador;
}







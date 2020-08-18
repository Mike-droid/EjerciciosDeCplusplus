/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria
donde se está guardando el número. Con punteros. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *direccion_numero; // *direccion_numero es una variable, en este caso que almacenará enteros,
									//de tipo apuntador
	
	cout<<"Digita un numero entero: "; cin>>numero;
	
	//Le decimos que tomará la dirección de memoria con el &
	direccion_numero = &numero;
	
	if(*direccion_numero%2==0){
		cout<<"El numero "<<*direccion_numero<<" es par"<<endl;
	} else{
		cout<<"El numero "<<*direccion_numero<<" es impar"<<endl;
	}
	
	cout<<"La direccion de memoria de "<< *direccion_numero<<" es "<<direccion_numero;
	
	getch();
	return 0;
}

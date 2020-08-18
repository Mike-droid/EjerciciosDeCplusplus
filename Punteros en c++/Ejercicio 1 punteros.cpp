/*Ejercicio 1: Comprobar si un n�mero es par o impar, y se�alar la posici�n de memoria
donde se est� guardando el n�mero. Con punteros. */

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *direccion_numero; // *direccion_numero es una variable, en este caso que almacenar� enteros,
									//de tipo apuntador
	
	cout<<"Digita un numero entero: "; cin>>numero;
	
	//Le decimos que tomar� la direcci�n de memoria con el &
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

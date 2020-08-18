/* Plantillas de Funci�n

Ejemplo: Sacar el valor absoluto de un n�mero */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funci�n
template <class TIPOD> //prefijo de la plantilla
void mostrarAbsoluto(TIPOD numero);

int main(){
	int num1=-4;
	float num2=-56.77;
	double num3=-123.5678;
	
	mostrarAbsoluto(num1);
	mostrarAbsoluto(num2);
	mostrarAbsoluto(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbsoluto(TIPOD numero){
	if(numero<0){
		numero = numero*-1;
	}
	cout<<"El valor absoluto del numero es "<<numero<<endl;
}

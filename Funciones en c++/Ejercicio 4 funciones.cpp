/*Ejercicio 4. Escriba un programa en C++ que devuelva la parte fraccionaria
de cualquier número introducido por el usuario. Por ejemplo, si se introduce
el número 256.879, debería desplegarse el número 0.879.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
void pedirNumero();
float numero,number;
void parteDecimal(float number);

int main(){
	pedirNumero();
	parteDecimal(number);
	getch();
	return 0;
}

void pedirNumero(){
	cout<<"Digite un numero con decimal ";
	cin>>numero;
}

void parteDecimal(float number){
	while(numero>1){
		numero-=1;
	}
	cout<<"La parte decimal es "<<numero;
}

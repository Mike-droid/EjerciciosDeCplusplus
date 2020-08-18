/*1. Escribe un programa que lea de la entrada estándar dos números y muestre
en la salida estándar su suma, resta, multiplicación y división.
*/

#include <iostream>

using namespace std;

int main(){
	float num1,num2;
	
	cout<<"Ingrese el primer numero :";
	cin>>num1;
	cout<<"\nIngrese el segundo numero :";
	cin>>num2;
	
	cout<<"\nLa suma de ambos numeros es "<<num1+num2;
	cout<<"\nLa resta de ambos numeros es "<<num1-num2;
	cout<<"\nLa multiplicacion de ambos numeros es "<<num1*num2;
	cout<<"\nLa division de ambos numero es "<<num1/num2;
	
	
	
	return 0;
}

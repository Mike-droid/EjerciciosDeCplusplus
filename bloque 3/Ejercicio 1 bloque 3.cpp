/* 1. Escriba un programa que lea dos n�meros y determine cu�l de ellos es 
el mayor.
*/

#include <iostream>

using namespace std;

int main(){
	float num1, num2;
	
	cout<<"Digite el primer numero: "; cin>>num1;
	cout<<"Digite el segundo numero: "; cin>>num2;
	
	if(num1>num2)
	{
		cout<<"El numero "<<num1<<" es mayor que "<<num2;
	} else if(num1<num2)
	{
		cout<<"El numero "<<num2<<" es mayor que "<<num1;
	} else
	{
		cout<<"Ambos numeros son iguales";
	}
	
	//Aqu� estamos diciendo que si numero 1 es mayor que numero 2 imprime eso
	//Si no, numero 1 es menor que numero 2
	//Y si no, ambos numeros son iguales
	
	
	
	return 0;
}

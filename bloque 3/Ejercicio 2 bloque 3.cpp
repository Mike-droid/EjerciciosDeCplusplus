/* 2. Escriba un programa que lea tres números y determine cuál de ellos es
el mayor.
*/

#include <iostream>

using namespace std;

int main(){
	float num1,num2,num3;
	
	cout<<"Ingresa 3 numeros "; cin>>num1>>num2>>num3;
	
	if(num1==num2&&num1==num3){
		cout<<"Los 3 numeros son iguales";
	} else if (num1 > num2 && num1 > num3)
	{
		cout<<"El mayor numero es "<<num1;
	} else if (num2 > num1 && num2 > num3)
	{
		cout<<"El mayor numero es "<<num2;
	} else 
	{
		cout<<"El mayor numero es "<<num3;	
	}	
		
	//Aquí estamos diciendo que si:
	//Numero 1 es mayor que numero 2 y numero 3, numero 1 es el mayor
	//Si no, si numero 2 es mayor que numero 1 y numero 3, numero 2 es el mayor
	//Y si no, entonces numero 3 es el mayor
	//O bien, los 3 son numeros iguales	
	return 0;
}

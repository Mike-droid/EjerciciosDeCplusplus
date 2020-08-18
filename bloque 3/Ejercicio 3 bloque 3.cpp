/* 3. Realice un programa que lea un valor entero y determine si se trata de 
un número par o impar.
*/

#include <iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	
	//numero%2 es dividir el numero entre 2 y lo que sacará es el residuo
	//de la división
	if(numero%2==0)
	{
		cout<<"El numero es par";	
	} else
	{
		cout<<"El numero es impar";
	}
	
	
	return 0;
}

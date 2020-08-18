/*	4. Comprobar si un número digitado por el usuario es positivo o negativo.
*/

#include <iostream>

using namespace std;

int main(){
	float numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero<0)
	{
		cout<<"El numero es negativo";	
	} else
	{
		cout<<"El numero es positivo";
	}
	
	
	return 0;
}

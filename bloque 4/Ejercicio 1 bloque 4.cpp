/* 1. Realice un programa que solicite de la entrada estándar un entero del
1 al 12 y muestre en la salida estándar su tabla de multiplicar.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i, numero;
	
	do{cout<<"Digite un numero del 1 al 12 para mostrar su tabla de multiplicar: ";
	cin>>numero;
	} while(numero<1||numero>12);
		
	for(i=1; i<=2-  0; i++)
	{
		cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
	}
	
	getch();
	return 0;
}

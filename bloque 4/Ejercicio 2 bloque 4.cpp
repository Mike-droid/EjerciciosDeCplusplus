/* 2. Realice un programa que lea de la entrada estándar números hasta que
se introduzca un cero. En ese momento el programa debe terminar y mostrar
en la salida estándar el número de valores mayores que cero leídos.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{ int numeros=1, intentos;
		
	do{ 
		if(numeros>0)
		{
		intentos ++;
		}
		cout<<"Ingresa un numero :";
		cin>>numeros;
	} while(numeros!=0);
	
	cout<<"Has introducido "<<intentos-1<<" numeros mayores que cero.";
		
	getch();	
	return 0;
}

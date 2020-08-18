/* 10. Escriba un programa que calcule el valor de 1!+2!+3!...+n!
(Suma de factoriales).
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numero, suma=0, factorial=1;
	
	cout<<"Digite un numero para calcular la suma de sus factoriales: "; 
	cin>>numero;
	
	for(int i=1; i<=numero; i++)
	{
		factorial*=i;
		suma+=factorial; //suma=suma+factorial		
	}
	
	cout<<"La suma de los factoriales de "<<numero<<" es de "<<suma;
	
	getch();
	return 0;
}

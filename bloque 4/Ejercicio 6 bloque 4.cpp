/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la función pow.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{	int x,y, resultado=1, i=1;
	
	do{
	cout<<"Digite un numero entero positivo: "; cin>>x;
	} while(x<0);
	
	do{
	cout<<"Digite un numero entero positivo para elevar "<<x<<" a esa potencia ";
	cin>>y;
	} while(y<0);
	
	while(i<=y)
	{
		resultado*=x;
		i++;
	}
	
	cout<<"El resultado de elevar "<<x<<" a la potencia "<<y<<" es "<<resultado; 
	getch();
	return 0;
}

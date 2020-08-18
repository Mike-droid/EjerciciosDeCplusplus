/*	11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...2^n
*/

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int n, suma=0;
	
	cout<<"Digite el numero hasta el que calculara la suma de";
	cout<<" 2^1+2^2+2^3+...2^n: ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		suma+=pow(2,i);
	}
	cout<<"La suma de los numeros base 2 es "<<suma;
	
	getch();
	return 0;	
}

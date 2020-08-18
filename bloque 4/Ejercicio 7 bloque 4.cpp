/*	7. Escriba un programa que calcule el valor de: 1+2+3+...+n
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{	int n, suma;
	
	cout<<"Ingrese el valor de n: "; cin>>n;
	
	for(int i=0; i<=n; i++){
		suma+=i;
	}
	cout<<"La suma es "<<suma;
	
	
	getch();
	return 0;
}

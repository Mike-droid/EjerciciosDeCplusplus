/* Calcular la raíz cuadrada de un número.
*/

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	float numero=0, raiz;
	
	cout<<"Write a number to calcute its square root: ";
	cin>>numero;
	
	raiz=sqrt(numero);
	
	cout<<"The square root of "<<numero<<" is "<<raiz;
	
	getch();
	return 0;
}

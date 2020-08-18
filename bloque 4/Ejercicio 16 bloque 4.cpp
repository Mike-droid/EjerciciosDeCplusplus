/* Realice un programa que calcule la descomposición en factores primos de
un número entero.

Por ejemplo: 20=2*2*5.
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{	int numero,divisor = 2;
 cout<<"Ingrese el numero a descomponer factorialmente:"; 
 cin>>numero;
 
 while(numero != 1) //Mientras el número introducido sea diferente de 1
 {
  	if(numero%divisor==0) //Si el residuo de la división entre numero y
  						//el divisor da 0 :
	{
   		numero = numero / divisor; 
   		cout<<divisor<<", ";
   		divisor = 2;
    } else if(numero%divisor != 0) //Si el residuo de la división entre número
    								//el divisor es diferente de 0:
	{
		divisor++;
  	}
 }
 
 cout<<"."<<endl<<endl;
	
	system("pause");
	return 0;
}

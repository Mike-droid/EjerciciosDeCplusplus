/* 8. Escriba un programa que lea de la entrada est�ndar los dos catetos
de un tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c,hipotenusa;
	
	cout<<"Digite el cateto a:"; cin>>a;
	cout<<"\nDigite el cateto b:"; cin>>b;
	
	c=(a*a)+(b*b);
	
	hipotenusa=sqrt(c);
	
	cout<<"\nLa hipotenusa del triangulo rectangulo es "<<hipotenusa;
	
	
	
	return 0;
}

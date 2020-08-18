/* 10. Escriba un programa que calcule
las soluciones de una ecuaci�n de
segundo grado de la forma
ax^2 + bx + c = 0, teniendo en cuenta
la f�rmula general.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float x1, x2, b,a,c;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"\nDigite el valor de b: "; cin>>b;
	cout<<"\nDigite el valor de c: "; cin>>c;
	
	x1 = (-b + sqrt(pow(b,2)-4*a*c)) / (2*a);
	x2 = (-b - sqrt(pow(b,2)-4*a*c)) / (2*a);
	
	cout<<"\nLas dos soluciones para la formula general son:"<<endl;
	cout<<x1 <<" y "<< x2<<endl;
	
	return 0;
}

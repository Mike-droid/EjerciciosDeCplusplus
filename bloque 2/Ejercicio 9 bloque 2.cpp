/* 9. Realice un programa que calcule el valor que toma la siguiente
función para unos valores dados de x e y:

La función es la raiz cuadrada de x,
sobre y al cuadrado, menos 1
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float x,y,resultado;
	
	cout<<"Digite el valor de x:"; cin>>x;
	cout<<"\nDigite el valor de y:"; cin>>y;
	
	resultado= (sqrt(x))/(pow(y,2)-1);
	
	cout<<"El resultado de la funcion de"<<endl;
	cout<<"raiz cuadrada de x sobre y cuadrada menos 1 es"<<endl;
	cout<<resultado;
	
	
	
	return 0;
}



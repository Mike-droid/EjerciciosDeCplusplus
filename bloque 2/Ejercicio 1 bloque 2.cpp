// Segundo bloque de C++
//1. Escribe la siguiente expresi�n matem�tica como expresi�n en C++:
//La expresi�n es a/b + 1



#include <iostream>

using namespace std;

int main(){
	float a,b, resultado=0;
	
	cout<<"Ingresa el valor de a: "; cin>>a;
	cout<<"\nIngresa el valor de b: "; cin>>b;
	
	resultado=(a/b)+1;
	
	//cout.precision(numero) ser� para redondear el resultado
	cout.precision(2);
	cout<<"\nEl resultado es de (a/b)+1 es "<<resultado<<endl;
	
	return 0;
}

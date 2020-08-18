//3. Escribe la siguiente expresión matématica como expresión en C++

// (a+(b/c))/(d+(e/f))

#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f,resultado=0;
	
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"\nIngrese el valor de b: "; cin>>b;
	cout<<"\nIngrese el valor de c: "; cin>>c;
	cout<<"\nIngrese el valor de d: "; cin>>d;
	cout<<"\nIngrese el valor de e: "; cin>>e;
	cout<<"\nIngrese el valor de f: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	cout.precision(2);
	cout<<"El resultado de (a+(b/c))/(d+(e/f)) es "<<resultado;
	
	
	return 0;
}

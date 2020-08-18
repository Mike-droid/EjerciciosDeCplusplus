/* Bloque 2. Ejercicio 2.
Escribe la siguiente expresión matemática como expresión en C++:
(a+b)/(c+d)
*/

#include <iostream>

using namespace std;

int main(){
float a,b,c,d,resultado=0;

cout<<"Ingrese el valor de a: "; cin>>a;
cout<<"\nIngrese el valor de b: "; cin>>b;
cout<<"\nIngrese el valor de c: "; cin>>c;
cout<<"\nIngrese el valor de d: "; cin>>d;

resultado=(a+b)/(c+d);

cout<<"\nEl resultado de (a+b)/(c+d) es "<<resultado<<endl;


return 0;
}

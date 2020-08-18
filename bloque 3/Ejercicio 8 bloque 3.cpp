/* 8. Escribe un programa que lea de la entrada estándar tres números. 
Después debe leer un cuarto número e indicar si el número coincide con alguno
de los introduciodos con anterioridad.
*/

#include <iostream>

using namespace std;

int main(){
	float num1, num2, num3,num4;
	
	cout<<"Digite tres numeros: ";
	cin>>num1>> num2>>num3;
	
	cout<<"Los numeros introducidos fueron: ";
	cout<<"\n"<<num1<<" , "<<num2<<" y "<<num3;
	
	cout<<"\nAhora ingrese un cuarto numero: ";
	cin>>num4;
	
	if(num4==num1||num4==num2||num4==num3)
	{
		cout<<num4<<" coincide con uno de los numeros ya introducidos.";
	} else 
	{
		cout<<num4<<" no coincide con los numeros introducidos.";
	}
	
	
	return 0;
}

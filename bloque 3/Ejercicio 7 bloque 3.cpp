/* 7. Escriba un programa que solicite una edad (un entero) e indique en la
salida estándar si la edad introducida está en el rango [18-25].
*/

#include <iostream>

using namespace std;

int main(){
	int edad=0;
	
	cout<<"Digite una edad: ";
	cin>>edad;
	
	if(edad>=18 && edad<=25) 
	{
		cout<<"Esta dentro del rango de 18-25";
	} else 
	{
		cout<<"Esta en un rango fuera de 18-25";
	}
	
	
	return 0;
}

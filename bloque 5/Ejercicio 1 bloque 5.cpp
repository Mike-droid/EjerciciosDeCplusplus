/* 1. Escriba un programa que defina un vector de números y calcule la suma
de sus elementos.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	 int vector[10]={2,4,6,8,10,12,14,16,18,20};
	 
	 int suma=0;
	 
	for(int i=0; i<10; i++) //i debe empezar en 0 y terminar en menor que 10
	//porque los vectores inician en 0 y en este caso terminará en la 
	//posición 9 : 0 1 2 3 4 5 6 7 8 9
	{
		suma+=vector[i];
	}
	
	cout<<"La suma de los numeros es  "<<suma<<endl;
	cout<<"\n";
	
	system("pause");
	return 0;
}

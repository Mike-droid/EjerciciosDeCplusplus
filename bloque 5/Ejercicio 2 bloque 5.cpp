/*2. Escribe un programa que defina un vector y calcule la multiplicación
de sus elementos.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int vector[5]={4,4,4,4,4}, multi=1;
	
	for(int i=0; i<5; i++)
	{
		multi*=vector[i];
	}
	
	cout<<"La multiplicacion de los elementos del vector es "<<multi<<endl;
	cout<<"\n";
	
	getch();
	return 0;
}

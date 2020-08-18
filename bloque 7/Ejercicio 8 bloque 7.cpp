/*8. Pedir al usuario 2 cadenas de caracteres de números, uno entero y otro
real, convertirlos a sus respectivos valores y por último sumarlos.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	cout<<"Digite un numero entero: ";
	
	char entero[10];
	
	gets(entero);
	
	cout<<"\nDigite un numero real: ";
	
	char real[10];
	
	gets(real);
	
	int enterito = atoi(entero);
	float realito = atof(real);
	
	float suma = enterito+realito;
	
	cout<<"\nLa suma de ambos numeros es "<<suma<<endl;
	
	getch();
	return 0;
}

/*	La sentencia do while:

La diferencia es que aquí, las instrucciones se van a ejecutar sí o sí
al menos 1 vez


	do
	{
		conjunto de instrucciones;
	} while (expresión lógica);
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i=10;
	
	do
	{
		cout<<i<<endl;
		i--; //decrementa el iterador de 1 en 1
	} while(i>=1);
	
	system("pause");
	return 0;
}

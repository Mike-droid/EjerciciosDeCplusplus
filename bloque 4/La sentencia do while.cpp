/*	La sentencia do while:

La diferencia es que aqu�, las instrucciones se van a ejecutar s� o s�
al menos 1 vez


	do
	{
		conjunto de instrucciones;
	} while (expresi�n l�gica);
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

/* 15. Realice un programa que solicite al usuario que piense un n�mero entero
entre el 1 y el 100. El programa debe generar un n�mero aleatorio en ese mismo
rango [1-100], e indique al usuario si el numero que digit� es menor o mayor
al n�mero aleatorio, as� hasta que lo adivine, y por �ltimo debe mostrarle el
n�mero de intentos que le llev�.

variable= limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

#include <iostream>
#include <stdlib.h>
#include <time.h> //Esta libreria sirve para generar el n�mero aleatorio  

using namespace std;

int main()
{	int aleatorio, numero=0, intentos=0;
	
	srand(time(NULL)); //generar un n�mero aleatorio
	aleatorio=1 + rand()% (100);
	
	cout<<"ADIVINA EL NUMERO";
	do
	{	intentos++;
	cout<<"\n Introduce un numero: ";
	cin>>numero;
	
	if(aleatorio<numero)
	{
		cout<<"Mas peque�o";
	}
	else if(aleatorio>numero)
	{
		cout<<"Mas grande";
	}
		
	}while(numero!=aleatorio);
	
	cout<<"\nLo has logrado, te ha tomado "<<intentos<<" intentos"<<endl;
	
	system("pause");
	return 0;
}

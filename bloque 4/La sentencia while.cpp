/* La sentencia while:
	
	while(expresi�n l�gica)
	{
		conjunto de instrucciones;
	}
 Esto quiere decir que mientras se cumplan la expresi�n l�gica
 se van a seguir ejecutanto las instrucciones, cuando deje de cumplirse
 la expresi�n, ya no se ejecutar�n las instrucciones.
*/

#include <iostream>
#include <conio.h>
 //la libreria conio.h servir� para que no se cierre el archivo.exe
using namespace std;

int main(){
	int i=10;
	
	while(i>=1)
	{
	cout<<i<<endl;
	i--;	
	}
	
	getch(); //usamos getch(); para que el archivo .exe no se cierre
	return 0;
}


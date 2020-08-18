/* La sentencia while:
	
	while(expresión lógica)
	{
		conjunto de instrucciones;
	}
 Esto quiere decir que mientras se cumplan la expresión lógica
 se van a seguir ejecutanto las instrucciones, cuando deje de cumplirse
 la expresión, ya no se ejecutarán las instrucciones.
*/

#include <iostream>
#include <conio.h>
 //la libreria conio.h servirá para que no se cierre el archivo.exe
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


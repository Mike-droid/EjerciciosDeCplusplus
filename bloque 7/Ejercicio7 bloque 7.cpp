/*7. Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por
la letra A, convertir su nombre a minúsculas, caso contrario no convertirlo.
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char nombre[20];
	
	cout<<"Escribe tu nombre en MAYUSCULAS: ";
	gets(nombre);
	
		if(nombre[0]=='A'){
			cout<<"Tu nombre es ";
			strlwr(nombre);
			cout<<nombre;
		} else{
			cout<<"Tu nombre no empieza por la letra A (mayuscula).";
		}
	
	getch();
	return 0;
}

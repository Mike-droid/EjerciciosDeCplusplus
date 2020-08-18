//Cadenas de caracteres

#include <iostream>
#include <conio.h>
#include <string.h> //Libreria para cadenas de caracteres

using namespace std;

int main(){
	char palabra[] = "Miguel"; //<--- Esta es mi cadena de caracteres
	char palabra2[] = {'M','I','G','U','E','L'}; //Otra cadena de caracteres
	char nombre[20];
	
	cout<<"Escribe tu nombre: "<<endl;
//	gets(nombre); //La desventaja de gets es que no importa el tamaño del arreglo
				//porque va a utilizar un espacio de memoria con tal de mostrar
				//el nombre completo
	
	cin.getline(nombre,20,'\n');
	
	
	cout<<nombre;
	
	getch();
	return 0;
}

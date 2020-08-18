//4. Crear una cadena que tenga la siguiente frase, "Hola qué tal", luego
//crear otra cadena para preguntarle al usuario su nombre, por último añadir
//el nombre al final de la primera cadena y mostrar el mensaje completo
//"Hola que tal (NombreDelUsuario)".

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main(){
	char saludo[]="Hola que tal ";
	char nombre[20];
	char saludo_nombre[40];
	
	cout<<"Escribe tu nombre: "<<endl;
	gets(nombre);
	
	strcpy(saludo_nombre,saludo); 
	//Copiando a saludo_nombre lo que está en saludo
	
	strcat(saludo_nombre,nombre);
	//Copiando a saludo_nombre (junto con lo que ya tiene guardado) lo que está en nombre
	
	cout<<saludo_nombre<<endl;
	
	getch();
	return 0;
} 

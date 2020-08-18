//Lectura de un archivo de texto

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;

void lectura();

int main(){
	lectura();
	
	system("pause");
	getch();
	return 0;
}

void lectura(){
	ifstream archivo; //input file stream
	string texto;

		//Puedo poner también la dirección del archivo
	archivo.open("leer.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //Mientras no sea el final del archivo
		getline(archivo,texto); //Todo lo que encontremos en la variable archivo será
								//copiado a la variable texto
		cout<<texto<<endl;						
	}
	
	archivo.close(); //Cerramos el archivo
}








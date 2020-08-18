/*Ejercicio 2: Realice un programa que pida al usuario el nombre o ubicación de un fichero
de texto y, a continuación de lectura a todo el fichero.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;

void leer();

int main(){
	leer();
	
	system("pause");
	getch();
	return 0;
}

void leer(){
	ifstream leeme;
	string texto, ubicacion;
	
	cout<<"Escribe el nombre del archivo que quieres leer o su ubicacion: ";
	getline(cin,ubicacion);
	
	leeme.open(ubicacion.c_str(),ios::in);
	
	if(leeme.fail()){
		cout<<"No se pudo leer el archivo";
		exit(1);
	}
	
	while(!leeme.eof()){
		getline(leeme,texto);
		cout<<texto<<endl;
	}
	
	leeme.close();
		
}







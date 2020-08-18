/*Ejercicio 3: Realice un programa que pida al usuario el nombre o ubicación de un fichero de
texto y, a continuación añada texto en él hasta que el usuario ya no quiera.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;

void sobreEscribir();

int main(){
	sobreEscribir();
	
	
	system("pause");
	getch();
	return 0;
}

void sobreEscribir(){
	ofstream file;
	string texto, ubicacion;
	char op;
	
	cout<<"Escribe el nombre o la ubicacion del archivo que quieres abrir: ";
	getline(cin,ubicacion);
	
	file.open(ubicacion.c_str(),ios::app);
	
	if(file.fail()){
		cout<<"El archivo no se pudo abrir :(";
	}
	
	do{
		cout<<"Escribe una frase que desees añadir al texto: ";
		cin>>texto;
		file<<texto;
		
		cout<<"¿Deseas agregar mas frases?(S/N): ";
		cin>>op;
	}while(op=='S'||op=='s');
	
	
}

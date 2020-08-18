#include<iostream>
#include<stdlib.h>
#include<string>
#include<conio.h>
#include<fstream> //file stream
using namespace std;

void escribir();

int main(){
	escribir();
	
	
	system("pause");
	getch();
	return 0;
}

void escribir(){
	ofstream archivito; //output stream
	string nombreArchivo, frase;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivito.open(nombreArchivo.c_str() , ios::out); //Abriendo el archivo
	
	if(archivito.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	
	cout<<"\nDigite el texto del archivo: ";
	getline(cin,frase);
	archivito<<frase;
	
	/*archivito<<"Fichero de prueba"<<endl;
	archivito<<"Agregando mas texto al archivo";*/
	
	archivito.close(); //Cerrar el archivo
}





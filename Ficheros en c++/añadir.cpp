//Añadir texto al final de un archivo

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;

void anadir();

int main(){
	anadir();
	
	system("pause");
	getch();
	return 0;
}


void anadir(){
	ofstream masTexto;
	string texto;	
	
	masTexto.open("hola.txt",ios::app); //Abrimos el archivo en modo añadir texto en él
	
	if(masTexto.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Escribe el texto que quieres añadir: ";
	getline(cin,texto);
	
	masTexto<<texto<<endl;
	
	masTexto.close();
	
}




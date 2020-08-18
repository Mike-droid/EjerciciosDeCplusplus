/*Ejercicio 1: Realice un programa que pida al usuario el nombre de un fichero de texto y, a 
continuación permita almacenar al usuario tantas frases como el usuario desee.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<fstream>

using namespace std;

void escribir();

int main(){
	escribir();
	
	system("pause");
	getch();
	return 0;
}

void escribir(){
	ofstream fichero;
	string nombreArchivo, frases;
	char op;
	
	cout<<"Escriba el nombre de su archivo: ";
	getline(cin,nombreArchivo);
	
	fichero.open(nombreArchivo.c_str() , ios::out);
		
	if(fichero.fail()){
		cout<<"El archivo no se pudo abrir.";
	}

	do{
		cout<<"\nEscriba una frase para su archivo: ";
		cin>>frases; //No puede haber espacios >:(
		fichero<<frases;
		
		cout<<"\n¿Desea agregar mas frases?(S/N): ";
		cin>>op;		
	}while(op=='s' || op =='S');
	
	
}






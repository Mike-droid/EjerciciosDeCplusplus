//Estructura básica en C++

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[25];
	int edad;
}P1; //P1 es una variable de tipo Persona
 
int main(){
	cout<<"Nombre P1: ";
	gets(P1.nombre);
	cout<<"Edad P1:";
	cin>>P1.edad;
	
	cout<<"\nEl nombre P1 es: "<<P1.nombre<<endl;
	cout<<"La edad de P1 es: "<<P1.edad<<endl;
	
	getch();
	return 0;
} 

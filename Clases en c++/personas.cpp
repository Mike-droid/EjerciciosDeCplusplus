//Clases en C++

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Persona{
	private: //Atributos
		int edad;
		string nombre;
	public: //Métodos
		Persona(int,string); //<-- Constructor
		void leer();
		void correr();	
};

//Constructor, nos sirve para inicializar los atributos de la clase
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro."<<endl;	
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo un maraton y tengo "<<edad<<" anios."<<endl;
}

int main(){
	Persona p1 = Persona(21,"Miguel");
	Persona p2(22,"Jose");
	Persona p3(14,"Juan");
	
	p1.leer();
		
	p2.correr();
	
	p3.correr();
	p3.leer();
	
	system("pause");
	getch();
	return 0;
}




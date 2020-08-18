//Destructor

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Perro{
	private:
		string nombre, raza;
	public:
		Perro(string,string); //Constructor
		~Perro(); //Destructor
		void mostrarDatos();
		void jugar();
};

//constructor
Perro::Perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}


//Destructor
Perro::~Perro(){
}

void Perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre;
	cout<<"\nRaza: "<<raza<<endl;
}

int main(){
	Perro p1("Fido","Dalmata");
	
	p1.mostrarDatos();
	p1.jugar();
	
	p1.~Perro(); //Destruyendo al objeto
	
	cout<<"\n";
	
	system("pause");
	getch();
	return 0;
	
}

/*Ejercicio 4: Crear un programa en C++ que tenga la suficiente jerarquía de clases y hacer
polimorfismo con el método comer().
										Animal
							Humano<------     ------>Perro 		*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Animal{
	private:
		string nombre;
	public:
		Animal(string);
		virtual void comer();
};

Animal::Animal(string _nombre){
	nombre = _nombre;
}

void Animal::comer(){
	cout<<nombre<<" esta comiendo"<<endl;
}

//---------------------------------------------------------------------------------------------

class Humano : public Animal{
	private:
		int edad;
	public:
		Humano(string,int);
		void comer();
};

Humano::Humano(string _nombre,int _edad) : Animal(_nombre){
	edad = _edad;
}

void Humano::comer(){
	Animal::comer();
	cout<<" y tiene "<<edad<<" anios"<<endl;
}

//--------------------------------------------------------------------------------------------
class Perro : public Animal{
	private:
		string raza;
	public:
		Perro(string,string);
		void comer();
};

Perro::Perro(string _nombre, string _raza) : Animal(_nombre){
	raza = _raza;
}

void Perro::comer(){
	Animal::comer();
	cout<<" y es raza "<<raza<<endl;
}


int main(){
	Animal *vector[4];
	
	vector[0] = new Humano("Oscar",24);
	vector[0]->comer();
	
	cout<<"\n";
	
	vector[1] = new Humano("Maria",30);
	vector[1]->comer();
	
	cout<<"\n";
	
	vector[2] = new Perro("Canela","Chihuhua");
	vector[2]->comer();
	
	cout<<"\n";
	
	vector[3] = new Perro("Rocky","Doberman");
	vector[3]->comer();
	
	
	system("pause");
	getch();
	return 0;
}

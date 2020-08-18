//Polimorfismo

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		virtual void mostrar(); //<--- Este método será para polimorfismo
};

class Alumno : public Persona{
	private:
		float notaFinal;
	public:
		Alumno(string,int,float);
		void mostrar(); //<---- es el mismo método, es polimorfismo
};

class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(string,int,string);
		void mostrar(); //<---- es el mismo método, es polimorfismo
};

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre,_edad){
	materia = _materia;
}

void Profesor::mostrar(){
	Persona::mostrar(); //Hay que poner Persona delante de mostrar para que no haya problemas
	cout<<"Materia del profesor: "<<materia<<endl;
}

Alumno::Alumno(string _nombre, int _edad , float _notaFinal) : Persona(_nombre,_edad){
	notaFinal = _notaFinal;
}

void Alumno::mostrar(){
	Persona::mostrar(); //Hay que poner Persona delante de mostrar para que no haya problemas
	cout<<"Nota final: "<<notaFinal<<endl;
}

Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

int main(){
	Persona *vector[3];
	
	vector[0] = new Alumno("Miguel estudiante",21,9.9);
	vector[1] = new Alumno("Jose Estudiante",30,8.8);
	vector[2] = new Profesor("Maria",34,"Algoritmos");
	
	vector[0]->mostrar();
	cout<<"\n";	
	vector[1]->mostrar();
	cout<<"\n";
	vector[2]->mostrar();
	
	system("pause");
	getch();
	return 0;
}

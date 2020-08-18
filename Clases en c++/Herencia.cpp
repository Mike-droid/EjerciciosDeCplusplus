//Herencia en POO

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public:	//Métodos
		Persona(string,int); //Constructor de la clase Persona
		void mostrarPersona();
};

//Alumno hereda de persona
class Alumno : public Persona{ //Con public le decimos que acceda a todo lo que es público de
								//su clase padre
	private: //Atributos
		string codigoAlumno;
		float notaFinal;
	public: //Métodos
		Alumno(string,int,string,float); //Constructor de la clase Alumno
		void mostrarAlumno();
};

//Constructor de la clase Persona(Clase Padre)
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad : "<<edad<<endl;
}

//Constructor de la clase alumno, el nombre y edad de persona ya están definidos de la clase padre
Alumno::Alumno(string _nombre,int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre,_edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo de alumno: "<<codigoAlumno<<endl;
	cout<<"Nota final: "<<notaFinal<<endl;
}

int main(){
	Alumno alumno1("Miguel Reyes",21,"435RM",9.9);
	
	alumno1.mostrarAlumno();	
	
	system("pause");
	getch();
	return 0;
}

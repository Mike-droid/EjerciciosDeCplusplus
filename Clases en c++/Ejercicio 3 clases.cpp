/*Ejercicio 3: Realice un programa en C++, de tal manera que se construya una solución para la
jerarquía(herencia) de clases mostrada en la siguiente figura:             
										Persona
						Empleado<------       --------->Estudiante 
																----->Universitario
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Persona{
	private:
		string nombre; 
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();	
	
};

Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
//--------------------------------------------------------------------------------------------

class Empleado : public Persona{
	private:
		float salario;
		string IDempleado;
	public:
		Empleado(string,int,float,string);
		void mostrarEmpleado();
		void setSalario(float);
		float getSalario();
};

Empleado::Empleado(string _nombre, int _edad, float _salario, string _IDempleado) : Persona(_nombre,_edad){
	salario = _salario;
	IDempleado = _IDempleado;
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"Salario: "<<salario<<endl;
	cout<<"ID Empleado: "<<IDempleado<<endl;
}

void Empleado::setSalario(float _salario){
	salario = _salario;
}

float Empleado::getSalario(){
	cout<<"Salario: "<<salario<<endl;
}

//-----------------------------------------------------------------------------------------
class Estudiante : public Persona{
	private:
		float calificacion;
		string IDestudiante;
	public:
		Estudiante(string,int,float,string);
		void mostrarEstudiante();	
};

Estudiante::Estudiante(string _nombre, int _edad, float _calificacion, string _IDestudiante) : Persona(_nombre,_edad){
	calificacion = _calificacion;
	IDestudiante = _IDestudiante;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Calificacion: "<<calificacion<<endl;
	cout<<"ID estudiante:"<<IDestudiante<<endl;
}

//----------------------------------------------------------------------------------------------
class Universitario : public Estudiante{
	private:
		string carrera;
	public:
		Universitario(string,int,float,string,string);
		void mostrarUniversitario();	
};

Universitario::Universitario(string _nombre,int _edad,float _calificacion, string _IDestudiante,string _carrera) : Estudiante(_nombre,_edad,_calificacion,_IDestudiante){
	carrera = _carrera;
}

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout<<"Carrera: "<<carrera<<endl;
}

int main(){
	cout<<"EMPLEADO: \n";
	Empleado e1("Juan Perez",30,5000.00,"123");
	e1.mostrarEmpleado();
	
	cout<<"\n";
	
	cout<<"ESTUDIANTE: \n";
	Universitario u1("Miguel Reyes",21,99.99,"17430111","ISC");
	u1.mostrarUniversitario();	
	
	system("pause");
	getch();
	return 0;
}

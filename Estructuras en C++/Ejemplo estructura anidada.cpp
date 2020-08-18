//Estructuras anidadas en C++

#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{
	char direccion[30];
	char ciudad[25];
	char provincia[25];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;	
} empleados[2] ; //2 estructuras de tipo "empleados"

int main(){
	
	for(int i=0; i<2; i++){
		fflush(stdin); //Vaciar al buffer y permitir digitar los valores
		cout<<"Escribe tu nombre: ";
		gets(empleados[i].nombre);
		cout<<"Escribe tu direccion: ";
		gets(empleados[i].dir_empleado.direccion);
		cout<<"Escribe tu ciudad: ";
		gets(empleados[i].dir_empleado.ciudad);
		cout<<"Escribe tu provincia: ";
		gets(empleados[i].dir_empleado.provincia);
		cout<<"Digita tu salario: ";
		cin>>empleados[i].salario;
		cout<<"\n";
	}
	
	//Imprimiendo los datos
	for(int i=0; i<2; i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"\n";
	}
	
	
	
	getch();
	return 0;
}

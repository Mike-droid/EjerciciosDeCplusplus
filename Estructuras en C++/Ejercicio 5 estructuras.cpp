/* 5. Hacer 2 estructuras, una llamada promedio que tendr� los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno que tendr� los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio est� anidada en la estructura 
alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por
�ltimo imprimir todos sus datos, incluido el promedio*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio{
	float nota1,nota2,nota3;
};
struct Alumno{
	char nombre[25];
	char sexo[10];
	int edad;
	struct Promedio prom; //<-- Estructura anidada
}alumno1;

int main(){
	float promedioAlumno;
	cout<<"Nombre: ";
	cin.getline(alumno1.nombre,20,'\n');
	cout<<"Sexo: ";
	cin.getline(alumno1.sexo,10,'\n');
	cout<<"Edad: ";
	cin>>alumno1.edad;
	cout<<"\nCalificaciones: ";
	cout<<"\nCalificacion 1: "; cin>>alumno1.prom.nota1;
	cout<<"\nCalificacion 2: "; cin>>alumno1.prom.nota2;
	cout<<"\nCalificacion 3: "; cin>>alumno1.prom.nota3;
	
	promedioAlumno=(alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	cout<<"Datos del alumno: ";
	cout<<"\nNombre: "<<alumno1.nombre;
	cout<<"\nSexo: "<<alumno1.sexo;
	cout<<"\nEdad: "<<alumno1.edad;
	cout<<"\nPromedio: "<<promedioAlumno;
	
	getch();
	return 0;
}


/*2. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar
cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos
del alumno. */

#include <iostream>
#include <conio.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
} a[3];

int main(){
	cout<<"Ingrese los datos que se le piden a continuacion: "<<endl;
	
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"\nNombre de alumno "<<i+1<<" :";
		cin.getline(a[i].nombre,20,'\n');
		cout<<"\nEdad del alumno "<<i+1<<" :";
		cin>>a[i].edad;
		cout<<"\nPromedio del alumno "<<i+1<<" :";
		cin>>a[i].promedio;
	}
	
	if(a[0].promedio > a[1].promedio && a[0].promedio > a[2].promedio){
		cout<<"\n\nEl promedio mas alto es de "<<a[0].promedio;
		cout<<"\nNombre: "<<a[0].nombre;
		cout<<"\nEdad "<<a[0].edad;
	}
	
	if(a[1].promedio > a[0].promedio && a[1].promedio > a[2].promedio){
		cout<<"\n\nEl promedio mas alto es de "<<a[1].promedio;
		cout<<"\nNombre: "<<a[1].nombre;
		cout<<"\nEdad: "<<a[1].edad;
	}
	
	if(a[2].promedio > a[0].promedio && a[2].promedio > a[1].promedio){
		cout<<"\n\nEl promedio mas alto es de "<<a[2].promedio;
		cout<<"\nNombre: "<<a[2].nombre;
		cout<<"\nEdad: "<<a[2].edad;
	}
	
	cout<<"\n";
	
	getch();
	return 0;
}

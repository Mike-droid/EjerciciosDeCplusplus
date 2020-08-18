/*Ejercicio 11: Hacer una estructura llamada alumno en la cual se tendrán los siguientes campos:
Nombre, Edad, promedio, datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor
promedio y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura. */

#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
	char nombre [20];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno; //es igual que &alumno[0]

//Prototipo de función
void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main(){
	pedirDatos();
	calcularMejorPromedio(puntero_alumno);
	
	
	getch();
	return 0;
}




void pedirDatos(){
	for(int i=0; i<3;i++){
		fflush(stdin); //vacia el buffer
		cout<<"Escribe el nombre "<<i+1<<": ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n'); //(puntero_alumno+i) guardas las cosas
														//con el puntero de estructuras
		cout<<"\nDigita la edad "<<i+1<<": ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"\nDigita el promedio "<<i+1<<": ";
		cin>>(puntero_alumno+i)->promedio;
		cout<<"\n";												
	}
}

void calcularMejorPromedio(Alumno *puntero_alumno){
	float mayor=0.0;
	int pos=0; //posición
	
	for(int i=0; i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){ //puntero_alumno[i].promedio
			mayor = (puntero_alumno+i)->promedio; //Comprobar el mayor promedio
			pos = i; //Guardar la posición del mayor promedio
		}
	}
	
	//Imprimir los datos del alumno con mayor promedio
	cout<<"\nEl alumno con mejor promedio es: "<<endl;
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}

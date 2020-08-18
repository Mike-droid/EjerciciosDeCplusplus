/* Ejercicio 6. Escriba un programa que lea la nota final de 4 alumnos y calcule
la nota final media de los cuatro alumnos.
*/

#include<iostream>

using namespace std;

int main(){
	float nota1,nota2,nota3,nota4,promedio;
	
	cout<<"Digite la calificacion del alumno 1:"<<endl;
	cin>>nota1;
	cout<<"Digite la calificacion del alumno 2:"<<endl;
	cin>>nota2;
	cout<<"Digite la calificacion del alumno 3:"<<endl;
	cin>>nota3;
	cout<<"Digite la calificacion del alumno 4:"<<endl;
	cin>>nota4;
	
	promedio=(nota1+nota2+nota3+nota4)/4;
	
	cout<<"\nEl promedio de las 4 calificaciones es "<<promedio<<endl;
	
	
	return 0;
}

/*Ejercicio 1: Escriba una funci�n llamada mult() que acepte dos n�meros en
punto flotante como par�metros, multiplique estos dos n�meros y despliegue
el resultado*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de funciones
void pedirDatos();
void mult(float x,float y);

float num1,num2;

int main(){
	pedirDatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digita 2 numeros: ";
	cin>>num1>>num2;
}


void mult(float x,float y){
	float multiplicacion = x*y;
	
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}

/*2. Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del
valor que se le transmite y despliegue el resultado. La funci�n deber�
ser capaz de elevar al cuadrado n�meros flotantes.*/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float x);
float num;

int main(){
	pedirDatos();
	al_cuadrado(num);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digita un numero : ";
	cin>>num;
}

void al_cuadrado(float x){
	float sq=pow(x,2);
	cout<<"El cuadrado del numero es "<<sq;
}

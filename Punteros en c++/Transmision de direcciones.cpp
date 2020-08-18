/*Transmisión de direcciones 

Ejemplo: Intercambiar el valor de 2 variables*/

#include<iostream>
#include<conio.h>

using namespace std;

void intercambio(float *, float *);//Prototipo

int main(){
	float num1=20.4, num2= 6.78;
	
	cout<<"Primer numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;
	
	//Usamos el & para indicar que vaya a la dirección de memoria
	intercambio(&num1 , &num2);//Llamada a la función intercambio
	
	cout<<"\n\nVALORES INTERCAMBIADOS"<<endl;
	cout<<"Nuevo valor de num1: "<<num1<<endl;
	cout<<"Nuevo valor de num2: "<<num2<<endl;
	
	getch();
	return 0;
} 

void intercambio(float *dirN1, float *dirN2){
	float aux;
	
	//Intercambiar los valores de las variables
	aux=*dirN1;
	*dirN1=*dirN2;
	*dirN2=aux;
}

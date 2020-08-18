/*Ejercicio 1: Construya una clase llamada Rectángulo que tenga los siguientes atributos:
largo y ancho, y los siguienes métodos: perímetro y área.*/

#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class Rectangulo{
	private:
		float largo,ancho;
	public:
		Rectangulo(float,float); //Constructor
	float	perimetro();
	float	area();
};

Rectangulo::Rectangulo(float _largo,float _ancho){
	largo = _largo;
	ancho = _ancho;
}

float Rectangulo::perimetro(){
	return (largo+ancho)*2;
}

float Rectangulo::area(){
	return (largo*ancho);
}

int main(){
	Rectangulo r1(4.0,8.0);
	
	cout<<"Perimetro del rectangulo con medidas de 4*8 =  ";
	cout<<r1.perimetro();
	
	cout<<"\nArea del rectangulo con medidas de 4*8 = ";
	cout<<r1.area();
	
	cout<<"\n";
	
	system("pause");
	getch();
	return 0;
}

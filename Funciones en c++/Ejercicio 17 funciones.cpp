/*Ejercicio 17: Suma de n�meros complejos

z1= 5-3i , z2= -4+2i

z1+z2=(5-3i)+(-4+2i)
	 =5-3i-4+2i
	 =1-i

*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Complejo{
	float real,imaginaria;
}z1,z2;

//Prototipo de funci�n
void pedirDatos();

Complejo suma(Complejo,Complejo);

void muestra(Complejo);

int main(){
	pedirDatos();	
	
	Complejo x = suma(z1,z2);
	
	muestra(x);
		
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite los datos para el primer numero complejo: "<<endl;
	cout<<"Parte real: "; cin>>z1.real;
	cout<<"\nParte imaginaria: "; cin>>z1.imaginaria;
	
	cout<<"\nDigite los datos para el segundo numero complejo: "<<endl;
	cout<<"Parte real: "; cin>>z2.real;
	cout<<"\nParte imaginaria: "; cin>>z2.imaginaria;
	
	
}

Complejo suma(Complejo z1,Complejo z2){ //<-- Variables de tipo complejo
	z1.real+=z2.real;
	z1.imaginaria+=z2.imaginaria;
	
	return z1;
}

void muestra(Complejo x){
	cout<<"\nResultado de la suma: "<<x.real<<" , "<<x.imaginaria<<"i";
}

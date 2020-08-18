/*Ejercicio 18: Escriba una función en C++ llamada mayor() que devuelva la
fecha más reciente de cualquier par de fechas que se le transmitan. Por ejemplo,
si se transmiten las fechas 10/09/2005 y 11/03/2017 a mayor(), será devuelta
la segunda fecha.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Fecha{
	int dia,mes,anio;
}fecha1,fecha2;

void pedirDatos();

Fecha mayor(Fecha,Fecha);

void muestra(Fecha);

int main(){
	pedirDatos();
	
	Fecha x = mayor(fecha1,fecha2);
	
	muestra(x);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el anio de la primera fecha: "; cin>>fecha1.anio;
	cout<<"\nDigite el mes de la primera fecha: "; cin>>fecha1.mes;
	cout<<"\nDigite el dia de la primera fecha: "; cin>>fecha1.dia;
	
	cout<<"\nDigite el anio de la segunda fecha: "; cin>>fecha2.anio;
	cout<<"\nDigite el mes de la segunda fecha: "; cin>>fecha2.mes;
	cout<<"\nDigite el dia de la segunda fecha: "; cin>>fecha2.dia;
	
}

Fecha mayor(Fecha fecha1, Fecha fecha2){

	if(fecha1.anio>fecha2.anio){
		return fecha1;
	} else if(fecha1.anio==fecha2.anio){
		if(fecha1.mes>fecha2.mes){
			return fecha1;
		} else if(fecha1.mes==fecha2.mes){
			if(fecha1.dia>fecha2.dia){
				return fecha1;
			} else if(fecha1.dia==fecha2.dia){
				cout<<"Ambas fechas son iguales";
			} else{
				return fecha2;
			}
		}else{
			return fecha2;
		}
	} else{
		return fecha2;
	}
}

void muestra(Fecha x){
	cout<<"\nLa mayor fecha es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio;
}

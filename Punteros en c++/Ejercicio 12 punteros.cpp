/*Ejercicio 12: Defina una estructura que indique el tiempo empleado por un ciclista en recorrer
una etapa. La estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa
que dado 3 etapas calcule el tiempo total empleado en correr todas las etapas.
NOTA: Usar punteros.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Ciclista{
	int horas,minutos,segundos;
}tiempo[3], *puntero_tiempo=tiempo;

void PedirDatos();
void CalculaTiempo(Ciclista *);

int sumaHoras=0,sumaMinutos=0,sumaSegundos=0;

int main(){
	PedirDatos();
	CalculaTiempo(puntero_tiempo);
	
	
	getch();
	return 0;
}

void PedirDatos(){
	for(int i=0; i<3;i++){
		fflush(stdin); //vacia el buffer
		cout<<"Digite la cantidad de horas de la etapa "<<i+1<<": ";
		cin>>(puntero_tiempo+i)->horas;
		cout<<"\nDigite la cantidad de minutos de la etapa "<<i+1<<": ";
		cin>>(puntero_tiempo+i)->minutos;
		cout<<"\nDigite la cantidad de segudos de la etapa "<<i+1<<": ";
		cin>>(puntero_tiempo+i)->segundos;
		cout<<"\n";
	}
}

void CalculaTiempo(Ciclista *puntero_tiempo){
	for(int i=0;i<3;i++){
		sumaHoras   += (puntero_tiempo+i)->horas;
		sumaMinutos += (puntero_tiempo+i)->minutos;
		sumaSegundos+= (puntero_tiempo+i)->segundos;
		if(sumaMinutos>59){
			sumaMinutos=0;
			sumaHoras++;
		}
		if(sumaSegundos>59){
			sumaSegundos=0;
			sumaMinutos++;
		}
	}
	cout<<"El total del tiempo fue de: \n";
	cout<<sumaHoras<<":"<<sumaMinutos<<":"<<sumaSegundos;
	cout<<"Horas, minutos y segundos respectivamente.";
}

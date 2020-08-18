/*Asignación dinámica de arreglos

new: reserva el número de bytes solicitado por la declaración.
delete: libera un bloque de bytes reservado con anterioridad.

Ejemplo: pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> //Esta libreria es para poder usar new y delete
using namespace std;

//Prototipo de función
void pedirNotas();

void mostrarNotas();

int numCalif, *calif;

int main(){
	
	pedirNotas();
	mostrarNotas();
	
	delete[] calif; //Liberando el espacio en bytes utilizados anteriormente
	
	getch();
	return 0;
}

void pedirNotas(){
	cout<<"Digite el numero de calificaciones: ";
	cin>>numCalif;
	
	calif = new int[numCalif]; //Crear el arreglo de tipo dinámico
	
	for(int i=0; i<numCalif; i++){
		cout<<"Ingrese la nota "<<i+1<<" : ";
		cin>>calif[i];
	}
	
}

void mostrarNotas(){
	cout<<"\n\nMostrando notas del usuario : \n";
	for(int i=0; i<numCalif; i++){
		cout<<calif[i]<<endl;
	}
}

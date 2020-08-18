/*Ejercicio 2: Construya una clase Tiempo que contenga los siguientes atributos enteros:
horas, minutos y segundos. Haga que la clase contenga 2 constructores, el primero debe tener
3 parámetros Tiempo(int,int,int) y el segundo sólo tendrá un campo que serán los segundos y
desensamble el número entero largo en horas, minutos y segundos.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Tiempo{
	private:
		int horas,minutos,segundos;
	public:
		Tiempo(int,int,int); //constructor1
		Tiempo(long); //Constructor2
		void darHora();
};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

Tiempo::Tiempo(long _segundos){
	horas = int(_segundos/3600);
	minutos = int((_segundos-horas*3600)/60);
	segundos = int(_segundos-horas*3600-minutos*60);
}

void Tiempo::darHora(){
	cout<<"El tiempo es: \n";
	cout<<horas<<":"<<minutos<<":"<<segundos<<endl;
	cout<<"Horas, minutos y segundos respectivamente."<<endl;
}


int main(){
	Tiempo t1(2,45,33);
	Tiempo t2(9490);
	
	t1.darHora();		
	t2.darHora();
	
	system("pause");
	getch();
	return 0;
}

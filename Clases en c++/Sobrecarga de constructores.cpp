//Sobrecarga de constructores

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Fecha{
	private: //Atributos
		int dia,mes,anio;
	public: //Métodos
		Fecha(int,int,int); //Constructor1
		Fecha(long); //Constructor2
		void mostrarFecha();
};

//Constructor1
Fecha::Fecha(int _dia, int _mes, int _anio){
	anio=_anio;
	mes=_mes;
	dia=_dia;
}

//Constructor2
Fecha::Fecha(long fecha){
	anio = int(fecha/10000); //Extraer el año
	mes = int((fecha-anio*10000)/100); //Extraer el mes
	dia = int(fecha-anio*10000-mes*100); //Extraer el día	
}

void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}


int main(){
	Fecha hoy(17,1,2020);
	Fecha ayer(20200116);
	
	hoy.mostrarFecha();
	
	ayer.mostrarFecha();
	
	
	system("pause");
	getch();
	return 0;
}

//Métodos Constructores y Modificadores (Getters y Setters)

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Punto{
	private: //Atributos
		int x,y;
	public: //Métodos
		Punto(); //Constructor
		void setPunto(int,int); //Método Set
		int getPuntoX(); //Método get
		int getPuntoY(); //Método get
};

Punto::Punto(){
	
}

//Establecemos valores a los atributos
void Punto::setPunto(int _x, int _y){
	x = _x;
	y = _y;
}

int Punto::getPuntoX(){
	return x;
}

int Punto::getPuntoY(){
	return y;
}

int main(){
	Punto punto1;
	
	//punto1.x= 15; <- esto no se puede hacer 
	
	punto1.setPunto(15,10);
	//cout<<punto1.x<<endl; <- tampoco se puede hacer esto
	cout<<punto1.getPuntoX()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	
	
	system("pause");
	getch();
	return 0;
}

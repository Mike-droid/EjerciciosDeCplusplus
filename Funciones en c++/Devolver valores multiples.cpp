//Devolver valores m�ltiples

#include <iostream>
#include <conio.h>
using namespace std;

void calcular(int,int,int&,int&);
//2 par�metros por valor y 2 par�metros por referencia
int main(){
	int num1,num2,suma=0,producto=0;
	
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	calcular(num1,num2,suma,producto);
	
	cout<<"El valor de la suma es :"<<suma<<endl;
	cout<<"El valor del producto es : "<<producto<<endl;
	
	getch();
	return 0;
}

void calcular(int num1,int num2, int& suma, int& producto){
	suma = num1+num2;
	producto = num1*num2;
}

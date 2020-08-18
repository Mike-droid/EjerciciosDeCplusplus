/*Ejercicio 6: Escriba una plantilla de función llamada máximo que devuelva
el valor máximo de tres argumentos que se transmitan a la función cuando sea
llamada. Suponga que los tres elementos serán el mismo tipo de dato*/

#include<iostream>
#include<conio.h>

using namespace std;

template <class TIPOD>
void maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);


int main(){
	float num1=1.1;
	float num2=1.7;
	float num3=1.4;
	
	maximo(num1,num2,num3);
	
	getch();
	return 0;
}
template <class TIPOD>
void maximo(TIPOD dato1,TIPOD dato2, TIPOD dato3){
	if( (dato1>dato2) && (dato1>dato3) ){
		cout<<"El maximo es: "<<dato1<<endl;
	}
	else if( (dato2>dato1) && (dato2>dato3) ){
		cout<<"El maximo es: "<<dato2<<endl;
	}
	else if( (dato3>dato1) && (dato3>dato2) ){
		cout<<"El maximo es: "<<dato3<<endl;
	} else{
		cout<<"Son todos iguales.";
	}
}



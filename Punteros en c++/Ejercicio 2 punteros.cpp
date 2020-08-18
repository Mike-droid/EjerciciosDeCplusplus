/* Ejercicio 2: Determinar si un número es primo o no, con punteros y además indicar
en qué posición de memoria se guardó el número.*/

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main(){
	int numero, *dir_num;	
	
	cout<<"Digite un numero: "; cin>>numero;
	
	dir_num = &numero;
	
	if(*dir_num<=1){
		cout<<"El numero "<<*dir_num<<" no es primo";
	} else{
		int raiz = sqrt(*dir_num);
		int contador=0;
		
		for(int i = raiz; i>1; i--){
			if(*dir_num%i==0){
				contador++;
			}
		}
		
		//cout<<">> "<<contador<<endl;
		
		if(contador<1){
			cout<<"El numero "<<*dir_num<<" es primo"<<endl;
		} else{
			cout<<"El numero "<<*dir_num<<" no es primo"<<endl;
		}
	}
	
	cout<<"La direccion de memoria es: "<<dir_num;
	
	getch();
	return 0;
}


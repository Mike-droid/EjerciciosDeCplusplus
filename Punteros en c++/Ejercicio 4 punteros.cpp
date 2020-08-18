/*Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando punteros
determinar el menor elemento del arreglo*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int arreglo[100], *dir_numero, n, menor=9999;
	
	cout<<"Digite la cantidad de elementos que usara en su arreglo: ";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>arreglo[i];
	}
	
	dir_numero=arreglo;
	
	for(int i=0; i<n; i++){
		if(*dir_numero < menor){
			menor = *dir_numero;
		}
		*dir_numero++;
	}
	cout<<"El menor elemento es "<<menor;
	
	getch();
	return 0;
}

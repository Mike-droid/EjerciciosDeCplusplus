//Saber si un número es primo o no

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int n;

void esPrimo(int);

int main(){
	
	esPrimo(n);
	
	getch();
	return 0;
}

void esPrimo(int n){
	cout<<"Escribe un numero para saber si es primo o no: ";
	cin>>n;
	int contador=0;
	if(n<=1){
		cout<<"No es primo";
	}else{
		int raiz = sqrt(n);
		
		for(int i=raiz; i>1;i--){
			if(n %i == 0){
				contador++;
			}
		}
		if(contador<1){
		cout<<"Es primo";
	}else{
		cout<<"No es primo";
	}	
	}
	
	
}





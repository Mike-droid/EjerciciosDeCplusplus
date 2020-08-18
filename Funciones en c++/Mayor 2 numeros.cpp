//Ejemplo encontrar el mayor de 2 números

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la función
int encontrarMax(int x,int y);

int main(){
	int n1,n2;
	
	cout<<"Digita 2 numeros: ";
	cin>>n1; 
	cin>>n2;
	
	encontrarMax(n1,n2);
	
	getch;
	return 0;
}


//Definición de función
int encontrarMax(int x,int y){
	int numMax;
	
	if(x>y){
		numMax=x;
		cout<<"El numero mayor es "<<x;
	}else if(y>x) {
		numMax=y;
		cout<<"El numero mayor es "<<y;
	} else{
		cout<<"Ambos numeros son iguales";
	}
	
	return numMax;
}

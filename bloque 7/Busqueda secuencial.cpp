//Busqueda secuencial

//a[5]={4,1,6,3,2}; dato=4;
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char a[]={'a','e','i','o','u'};
	int i;
	char band='F';
	
	
	char dato='r';
	//Busqueda secuencial
	i=0;
	while((band=='F')&&(i<5)){
		if(a[i]==dato){
			band='V';
		}
		i++;
	}
	
	if(band=='F'){
		cout<<"El numero a buscar no existe en el arreglo";
	}
	else if(band=='V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}

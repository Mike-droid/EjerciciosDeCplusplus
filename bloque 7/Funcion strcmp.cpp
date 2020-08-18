//Comparar cadenas - Función strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

//avión - becerro

int main(){
	char palabra1[]="Becerro";
	char palabra2[]="Avion";
	
	if(strcmp(palabra1,palabra2)>0){
		cout<<palabra1<<" esta despues alfabeticamente";
	}
		
	cout<<"\n";
	system("pause");
	return 0;
}

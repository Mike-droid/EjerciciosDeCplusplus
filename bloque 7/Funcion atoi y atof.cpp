//Transformar una cadena a números - Función atoi() y atof()

//"123.45" -> 123.45

//atoi = integer
//atof = float

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
	
	char cad[]="123";
	int numero;
	
	numero=atoi(cad);
	
	cout<<numero<<endl;
	
	char cad2[]="45.45";
	float numero2;
	
	numero2=atof(cad2);
	
	cout<<numero2<<endl;
	
	getch();
	return 0;
}

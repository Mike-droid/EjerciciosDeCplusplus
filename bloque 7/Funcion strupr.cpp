//Pasar una palabra a MAYÚSCULA - Función strupr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char palabra[]="miguel";
	
	strupr(palabra);
	
	cout<<palabra<<endl;
	
	getch();
	return 0;
}

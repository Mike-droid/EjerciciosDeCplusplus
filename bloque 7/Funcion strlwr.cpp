//Pasar una palabra a minúsculas - Función strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char palabra[]="ITPN";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	getch();
	return 0;
}

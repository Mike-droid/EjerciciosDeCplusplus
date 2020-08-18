/*5. Hacer un programa que determine si una palabra es políndroma.
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char polindroma[30];
	char palabra[30];
	
	cout<<"Escriba una palabra para verificar si es polindroma o no: ";
	gets(polindroma);
	
	strcpy(palabra,polindroma);
	
	strrev(polindroma);
	
	if(strcmp(polindroma,palabra)==0){
		cout<<polindroma<<" es una palabra polindroma.";
	} else{
		cout<<polindroma<< " no es una palabra polindroma.";
	}
	
	
	getch();
	return 0;
}

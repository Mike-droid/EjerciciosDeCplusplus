/*9. Realice un programa que lea una cadena de caracteres de la entrada estándar
y muestre en la salida estándar cuántas ocurrencias de cada vocal existen en
la cadena.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char frase[30];
	int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
	
	cout<<"Digite una frase: ";
	cin.getline(frase,30,'\n');
	
	for(int i=0; i<30; i++){
		switch(frase[i]){
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
		}
	}
	
	cout<<"Vocal a ha sido encontrada " <<vocal_a<<" veces."<<endl;
	cout<<"Vocal e ha sido encontrada " <<vocal_e<<" veces."<<endl;
	cout<<"Vocal i ha sido encontrada " <<vocal_i<<" veces."<<endl;
	cout<<"Vocal o ha sido encontrada " <<vocal_o<<" veces."<<endl;
	cout<<"Vocal u ha sido encontrada " <<vocal_u<<" veces."<<endl;
	
	getch();
	return 0;
}

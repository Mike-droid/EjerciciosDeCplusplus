/* 6. Escriba un programa que lea de la entrada est�ndar un car�cter e indique
en la salida est�ndar si el car�cter es una vocal min�scula, es una vocal
may�scula o no es una vocal.
*/

#include <iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: ";
	cin>>letra;
	
	switch(letra){
		case 'a': cout<<"Es una vocal minuscula"; break;
		case 'e': cout<<"Es una vocal minuscula"; break;
		case 'i': cout<<"Es una vocal minuscula"; break;
		case 'o': cout<<"Es una vocal minuscula"; break;
		case 'u': cout<<"Es una vocal minuscula"; break;
		case 'A': cout<<"Es una vocal mayuscula"; break;
		case 'E': cout<<"Es una vocal mayuscula"; break;
		case 'I': cout<<"Es una vocal mayuscula"; break;
		case 'O': cout<<"Es una vocal mayuscula"; break;
		case 'U': cout<<"Es una vocal mayuscula"; break;
		default : cout<<"Es una consonante";  break;
	}
	
	
	
	
	
	
	return 0;
}

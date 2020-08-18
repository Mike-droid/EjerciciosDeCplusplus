//Llenar un cuadrilatero
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int base, altura;
	
	cout<<"Base: "; cin>>base;
	cout<<"Altura: "; cin>>altura;
	
	for(int i=0; i<altura;i++){
		cout<<"\n";
		for(int j=0; j<base;j++){
			cout<<"+ ";
		}
	}
	
	cout<<"\n\nArea del cuadrilatero = "<<base*altura<<" cm cuadrados.";
	getch();
	return 0;
}

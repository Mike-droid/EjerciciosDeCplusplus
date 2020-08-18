/*3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si
ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor
alfabeticamente.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30];
	char palabra2[30];
	
	cout<<"Escriba una palabra: "<<endl;
	gets(palabra1);
	
	cout<<"Escriba otra palabra xd: "<<endl;
	gets(palabra2);
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas palabras son iguales.";
	} else if(strcmp(palabra1,palabra2)>0){
		cout<<palabra1<<" esta despues alfabeticamente.";
	} else if(strcmp(palabra2,palabra1)>0){
		cout<<palabra2<<" esta despues alfabeticamente.";
	}
	
	getch();
	return 0;
}

/*Ejercicio 8: Escriba una función llamada cambio() que tenga un parámetro en
número entero y seis parámetros de referencia en número entero nombrados
100,50,20,10,5 y 1 respectivamente. La función tiene que considerar el valor
entero transmitido como una cantidad en dólares y convertir el valor en el
número menor de billetes equivalentes.*/

#include<iostream>
#include<conio.h>

using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int dolares,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	cout<<"Ingrese la cantidad de dolares: ";
	cin>>dolares;
	
	cambio(dolares,cien,cincuenta,veinte,diez,cinco,uno);
	
	getch();
	return 0;
}

void cambio(int dolares,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	if(dolares >= 100){
  cien = dolares / 100;
  dolares %= 100;
 }
 if(dolares >= 50){
  cincuenta = dolares / 50;
  dolares %= 50;
 }
 if(dolares >= 20){
  veinte = dolares / 20;
  dolares %= 20;
 }
 if(dolares >= 10){
  diez = dolares / 10;
  dolares %= 10;
 }
 if(dolares >= 5){
  cinco = dolares / 5;
  dolares %= 5;
 }
 if(dolares >= 1){
  uno = dolares;
 }
 //Detrás de esta lógica, el valor del dolar va disminuyendo poco a poco
 //hasta llegar a un valor <5, usando la división y el módulo (residuo).
 //Como son valores enteros, nos sirve de mucho el terminar la división
 //en donde empezaría el decimal.
 cout << "\nEl cambio es de: \n" << endl;
 cout << cien << " billetes de $100" << endl;
 cout << cincuenta << " billetes de $50" << endl;
 cout << veinte << " billetes de $20" << endl;
 cout << diez << " billetes de $10" << endl;
 cout << cinco << " billetes de $5" << endl;
 cout << uno << " billetes de $1" << endl;
 
}

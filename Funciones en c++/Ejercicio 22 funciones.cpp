/*Ejercicio 22: Escriba una funci�n escribeNumeros(int ini,int fin) que devuelva
en la salida est�ndar los n�meros del inicio al final. Escriba una versi�n que
escriba los n�meros en orden ascendente.*/


#include <iostream>
#include <conio.h>
using namespace std;

/*** PROTOTIPOS ***/
void escribe_numeros(int ini, int fin);

int main(){
 int ini;
 int fin;
 
 //pedir datos al usuario
 cout << "Ingrese el numero de inicio: ";
 cin >> ini;
 cout << "Ingrese el numero de fin: ";
 cin >> fin;

 //llamar funcion
 escribe_numeros(ini, fin);

 getch();
 return 0;
}

/*** FUNCIONES ***/
void escribe_numeros(int ini, int fin){
 if(ini == fin){ //caso base
  cout << ini << endl; 
 }else{ //caso general
  cout << ini << " ";
  ini++;
  escribe_numeros(ini,fin);
 }
}

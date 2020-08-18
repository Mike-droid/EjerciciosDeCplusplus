/*Ejercicio 12: Realice una función que tome como parámetros un vector y su
tamaño y diga  si el vector está ordenado crecientemente. Sugerencia:
compruebe que para todas las posiciones del vector, salvo para la 0, el
elemento del vector es mayor o igual que el elemento que le precede en el
vector.*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();

void esMayor(int vec[], int);

int vec[100], tam;

int main(){
	
	 pedirDatos();
	 esMayor(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del vector: ";
	cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<i+1<< " .Digite un numero: ";
		cin>>vec[i];
	}
	
}

void esMayor(int vec[], int tam){
	int aux = 1;
 
 for(int i=1;i<tam;i++){
  if(vec[i] >= vec[i-1]){
   aux += 1;
  }
 }
 
 if(aux == tam){
  cout<<"\nEl arreglo esta ordenado crecientemente."<<endl;
 }
 else{
  cout<<"\nEl arreglo NO esta ordenado crecientemente."<<endl;
 }
	
}

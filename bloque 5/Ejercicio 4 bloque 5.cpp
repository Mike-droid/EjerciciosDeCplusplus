/* 4. Escribe un programa que defina un vector de n�meros y muestre en la
salida est�ndar el vector en orden inverso - del �ltimo al primer elemento.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vector[100], n;
	
	cout<<"Digite el numero de elementos que tendra el vector: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: ";
		cin>>vector[i];
	}
	
	//Mostrando el vector en orden inverso
	//i debe ser igual a n-1 porque hay que recordar que el arreglo empieza
	//en 0, entonces la �ltima posici�n ser� en este caso n-1
	//luego puede empezar a contar desde ah� y de decrementamos el valor
	//a i de uno en uno
	for(int i=n-1; i>=0; i--){
		cout<<vector[i]<<endl;
	}
	
	
	system("pause");
	return 0;
}

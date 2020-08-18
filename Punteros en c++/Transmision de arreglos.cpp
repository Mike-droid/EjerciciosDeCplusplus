/* Transmisión de arreglos

Ejemplo: Hallar el máximo elemento de un arreglo. */

#include <iostream>
#include <conio.h>
using namespace std;

//Para pasar un arreglo a una función hay que pasarle el elemento de la primera posición
//y también el número de elementos
int hallarMax(int *,int); //Prototipo de función
//int *  es variable de tipo puntero
int main(){
	//Constante para el número de elementos
	const int nElementos = 5;
	int numeros[nElementos] = {3,15,2,8,1};
	
	cout<<"El mayor elemento es: "<<hallarMax(numeros,nElementos);
	
	//numeros = &numeros[0]; esto es lo mismo
	//ambos indican la primera posición del arreglo 
	
	getch();
	return 0;
}

int hallarMax(int *dirVec, int nElementos){
	int max = 0;
	
	//El bucle sirve para recorrer el arreglo
	for(int i=0; i<nElementos; i++){
		//Esto es el número que hay dentro de la dirección de memoria
		if(*(dirVec+i)>max){
			max = *(dirVec+i); //max toma el valor de la dirección de memoria (lo que hay dentro de ella)
		}
	}
	return max;
}



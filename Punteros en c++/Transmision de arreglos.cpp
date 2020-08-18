/* Transmisi�n de arreglos

Ejemplo: Hallar el m�ximo elemento de un arreglo. */

#include <iostream>
#include <conio.h>
using namespace std;

//Para pasar un arreglo a una funci�n hay que pasarle el elemento de la primera posici�n
//y tambi�n el n�mero de elementos
int hallarMax(int *,int); //Prototipo de funci�n
//int *  es variable de tipo puntero
int main(){
	//Constante para el n�mero de elementos
	const int nElementos = 5;
	int numeros[nElementos] = {3,15,2,8,1};
	
	cout<<"El mayor elemento es: "<<hallarMax(numeros,nElementos);
	
	//numeros = &numeros[0]; esto es lo mismo
	//ambos indican la primera posici�n del arreglo 
	
	getch();
	return 0;
}

int hallarMax(int *dirVec, int nElementos){
	int max = 0;
	
	//El bucle sirve para recorrer el arreglo
	for(int i=0; i<nElementos; i++){
		//Esto es el n�mero que hay dentro de la direcci�n de memoria
		if(*(dirVec+i)>max){
			max = *(dirVec+i); //max toma el valor de la direcci�n de memoria (lo que hay dentro de ella)
		}
	}
	return max;
}



/* 4. Ejecute el programa del ejercicio anterior con entradas err�neas y
observe los resultados. Por ejemplo, introduzca un dato de tipo car�cter
cuando se espera un dato de tipo entero.
*/


#include <iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo[10]; //masculino tiene 9 letras y femenino tambi�n
	//char var[numero] leer� varias letras en lugar de solo 1, tiene espacio
	//para m�s letras
	float altura;
	
	cout<<"Ingrese la edad de la persona: "; cin>>edad;
	cout<<"\nIngrese masculo o femenino: "; cin>>sexo;
	cout<<"\nIngrese la altura en metros de la persona: "; cin>>altura;
	
	cout<<"\nLa edad de la persona es "<<edad;
	cout<<"\nEl sexo de la persona es "<<sexo;
	cout<<"\nLa altura de la persona "<<altura;
		
	
	return 0;
}

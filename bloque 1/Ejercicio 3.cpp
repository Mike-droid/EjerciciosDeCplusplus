/* 3. Realice un programa que lea de la entrada est�ndar los siguientes datos 
de una persona.

	Edad: dato de tipo entero.
	Sexo: Dato de tipo car�cter.
	Altura en metro: dato de tipo float.
	
	Tras leer los datos, el programa debe mostrarlos en la salida est�ndar.
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


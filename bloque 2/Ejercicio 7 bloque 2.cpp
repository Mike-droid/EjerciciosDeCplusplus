/* 7. La calificaci�n final de un estudiante es la media ponderada de
tres notas: la nota de pr�cticas que cuenta un 30% del total, la nota
te�rica que cuenta un 60% y la nota de participaci�n que cuenta un 10%
restante. Escriba un programa que lea de la entrada est�ndar las tres notas
de un alumno y escriba en la salida est�ndar su nota final.
*/

#include<iostream>

using namespace std;

int main(){
	float final, practicas, teoria, participacion;
	
	cout<<"Las calificaciones se evaluan de 0 al 100"<<endl;
	cout<<"Digite la calificacion de practicas:"; cin>>practicas;
	cout<<"\nDigite la calificacion de teoria:"; cin>>teoria;
	cout<<"\nDigite la calificacion de participacion:"; cin>>participacion;
	
	final= ((practicas * .30) + (teoria * .60) + (participacion * .10)) ;
	
	cout<<"La calificacion final es de "<<final<<"%"<<endl;
	
	/* �REDUCCI�N DE EXPRESIONES!
	En lugar de escribir, por ejemplo:
	practica = practica * 0.30, puedes escribir practica*=0.30 y es lo mismo
	*/
	
	
	return 0;
}


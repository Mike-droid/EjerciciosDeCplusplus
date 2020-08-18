/* Punteros - Declaraci�n de punteros

&n = la direcci�n de n
*n = la variable cuya direcci�n est� almacenada en n
*/
//Un Puntero es una variable que va a almacenar la direcci�n de memoria donde se est�
//guardando otra variable
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dir_num;
			//dir_num es una variable entera de tipo apuntador
	num = 20;
	dir_num = &num;
	//dir_num apunta a num
	
	//Para mostrar el valor de la variable hay que poner el * antes de la variable
	//de tipo puntero
	cout<<"Numero: "<< *dir_num <<endl;
	
	//Para mostrar la direcci�n de memoria solamente escribo la variable de
	//tipo puntero
	cout<<"Direccion de memoria: "<< dir_num <<endl;
	
	getch();
	return 0;
}

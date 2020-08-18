/* 10. Mostrar los meses del año, pidiéndole al usuario un número entre
(1-12), y mostrar el mes al que corresponde.
*/

#include <iostream>

using namespace std;

int main(){
	int mes;
	cout<<"Digita un numero entre 1 y 12: ";
	cin>>mes;
	
	switch(mes)
	{
		case 1: cout<<"Enero."; break;
		case 2: cout<<"Febrero."; break;
		case 3: cout<<"Marzo."; break;
		case 4: cout<<"Abril."; break;
		case 5: cout<<"Mayo."; break;
		case 6: cout<<"Junio."; break;
		case 7: cout<<"Julio."; break;
		case 8: cout<<"Agosto."; break;
		case 9: cout<<"Septiembre."; break;
		case 10: cout<<"Octubre."; break;
		case 11: cout<<"Noviembre."; break;
		case 12: cout<<"Diciembre."; break;
		default: cout<<"Numero fuera del rango 1-12"; break;
	}
	
	
	
	return 0;
}

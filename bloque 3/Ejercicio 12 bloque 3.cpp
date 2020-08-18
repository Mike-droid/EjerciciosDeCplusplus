/* 12. Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un número.
Caso 2: Número par o impar.
Case 3: Cuadrado de un número.
Case 4: Salir.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
	float numero; int opc, number;
	cout<<"Por favor, elija una de las siguientes opciones: "<<endl;
	cout<<"1. Cubo de un numero."<<endl;
	cout<<"2. Cuadrado de un numero."<<endl;
	cout<<"3. Numero par o impar."<<endl;
	cout<<"4. Salir."<<endl;
	cin>>opc;
	
	switch(opc)
	{
		case 1: cout<<"Digite un numero para elevarlo al cubo: ";
				cin>>number;
				number=pow(number,3);
				cout<<number;
				break;
		case 2: cout<<"Digite un numero para elevarlo al cuadrado: ";
				cin>>number;
				number=pow(number,2);
				cout<<number;
				break;
		case 3: cout<<"Digite un numero para saber si es par o impar: ";
				cin>>number;
				
				if(number%2==0) 
				{
					cout<<"El numero es par.";
				} else 
				{
					cout<<"El numero es impar.";
				}				 
				break;
		case 4: break;		
	}
	
	return 0;
}

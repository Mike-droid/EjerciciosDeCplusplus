/*2. Escribe un programa que lea de la entrada est�ndar el precio de un
producto y muestre en la salida est�ndar el precio del producto al aplicarle
el IVA.
*/

#include <iostream>

using namespace std;

int main(){
	float precio, IVA, precio_iva, total;
	
	cout<<"Introduce el valor del IVA "; cin>>IVA;
	cout<<"\nIntroduce el precio del producto "; cin>>precio;
	precio_iva=(IVA*precio)/100;
	cout<<"El IVA es de "<<precio_iva<<endl;
	total = precio_iva + precio;
	cout<<"El precio total del producto es "<<total;
	
	return 0;
}

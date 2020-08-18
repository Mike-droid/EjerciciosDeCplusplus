/* 4. Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{	float temperatura, maxtem=0, mintem=999, temPromedio;
	int horas=24;

	for(int i=0; i<horas; i+=4)
	{
		cout<<"Hora "<<i<<":00"<<endl;
		cout<<"Ingrese temperatura en grados Celcius: "; cin>>temperatura;
	
	if(temperatura>maxtem)
	{
		maxtem=temperatura;
	}	
	
	if(temperatura<mintem)
	{
		mintem=temperatura;
	}	
	
	temPromedio+=temperatura/6;		 
	
    }
    
    cout<<"La temperatura promedio es de: "<<temPromedio<<endl;
	cout<<"La temperatura mas baja es: "<<mintem<<endl;
	cout<<"La temperatura mas alta es: "<<maxtem<<endl;
    
	getch();
	return 0;
}

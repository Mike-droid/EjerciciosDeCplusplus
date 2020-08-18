/*3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor y menor salario.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct empleado{
	char nombre[20];
	float salario;	
}emp[100];


int main(){
	int N_empleados, posM=0, posm=0;
	float mayor=0, menor=99999999999;
	
	cout<<"Digite el numero de empleados: ";
	cin>>N_empleados;
	
	for(int i=0; i<N_empleados; i++){
		fflush(stdin);
		cout<<"ID: "<<i+1<<" ";
		cout<<"Digite su nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<"Digite su salario: ";
		cin>>emp[i].salario;
		
		//Determinando el mayor salario
		if(emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;
		}
		//Determinando el menor salario
		if(emp[i].salario<menor){
			menor=emp[i].salario;
			posm=i;
		}
		cout<<"\n";
	}
	
	cout<<"Datos del empleado con mayor salario: \n";
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	cout<<"\n"; 
	cout<<"Datos del emepleado con menor salario: \n";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	
	getch();
	return 0;
}

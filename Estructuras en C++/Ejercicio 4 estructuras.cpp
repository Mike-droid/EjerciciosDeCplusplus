/*4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los
siguientes campos: nombre, país, numero_medallas y que devuelva los datos
(Nombre,país) del atleta que ha ganado el mayor número de medallas*/

#include<iostream>
#include<conio.h>

using namespace std;

	struct atleta{
	char nombre[20];
	char pais[20];
	int medallas;	
	}atleanx[100];

int main(){
	int N_atletas, posM=0, mayor=0;
	
	cout<<"Digite el numero de atletas: ";
	cin>>N_atletas;
	
	for(int i=0; i<N_atletas; i++){
		fflush(stdin);
		cout<<"ID: "<<i+1<<". ";
		cout<<"Digite el nombre del atleta: ";
		cin.getline(atleanx[i].nombre,20,'\n');
		cout<<"Escriba el pais de procedencia de "<<atleanx[i].nombre<<" : ";
		cin.getline(atleanx[i].pais,20,'\n');
		cout<<"Digite las medallas de "<<atleanx[i].nombre<<" : ";
		cin>>atleanx[i].medallas; 
		
		//Determinando la mayor cantidad de medallas
		if(atleanx[i].medallas>mayor){
			mayor=atleanx[i].medallas;
			posM=i;
		}
		cout<<"\n";
	}
	
	cout<<"El atleta con mayor medallas es: "<<atleanx[posM].nombre<<" de "<<atleanx[posM].pais<<" con "<<atleanx[posM].medallas<<" medallas.";
	
	getch();
	return 0;
}

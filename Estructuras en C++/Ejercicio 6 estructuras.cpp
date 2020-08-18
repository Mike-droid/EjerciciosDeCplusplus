/*Ejercicio 6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos
para N alumnos y calcular cuál de todos tiene el mejor promedio, e imprimir sus
datos.*/
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct promedio{
 float nota1=0,nota2=0,nota3=0;
};

struct alumno{
 char nombre[25];
 char sexo[15];
 int edad;
 struct promedio total;
 int final;
}alumnos[1000],finall[1000];

int main(){
 int n_alm,posm,mayor=0;
 cout<<"Introduce Numero De Alumnos: ";     
 cin>>n_alm;
 cout<<"-------------------------------------------------"<<endl;
 for(int i=0;i<n_alm;i++){
  fflush(stdin);
  cout<<"Nombre De Alumno "<<i+1<<" --> ";
  cin.getline(alumnos[i].nombre,25,'\n');
  cout<<"Sexo Del Alumno "<<i+1<<" --> ";
  cin.getline(alumnos[i].sexo,15,'\n');
  cout<<"Edad Del Alumno "<<i+1<<" --> ";
  cin>>alumnos[i].edad;
  cout<<"-------------------------------------------------"<<endl;
 }//fin for1
 for(int i=0;i<n_alm;i++){
  fflush(stdin);
  cout<<"[Alumno "<<i+1<<"]"<<" - Nota 1: ";
  cin>>alumnos[i].total.nota1;
  cout<<"[Alumno "<<i+1<<"]"<<" - Nota 2: ";
  cin>>alumnos[i].total.nota2;
  cout<<"[Alumno "<<i+1<<"]"<<" - Nota 3: ";
  cin>>alumnos[i].total.nota3;
  cout<<"-------------------------------------------------"<<endl;
  
 finall[i].final = (alumnos[i].total.nota1+alumnos[i].total.nota2+alumnos[i].total.nota3)/3;
 
 if(finall[i].final>mayor){
 mayor=finall[i].final; 
  posm=i;
 }//fin if
 }//fin for2
 
 cout<<"\t.:Mejor Promedio:."<<endl;
 cout<<"Nombre -> "<<alumnos[posm].nombre<<"---"<<"Promedio -> "<<finall[posm].final<<endl;
 cout<<"-----------------------------------------------------------"<<endl;
 
 
 getch();
 return 0;
}

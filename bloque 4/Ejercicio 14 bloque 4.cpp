/* 14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere
determinar el número de:

a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo
de las estadísticas.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
 float calif1=0,calif2=0,calif3=0; //calificaciones decimales
 int apuna=0, apfinal=0, aptodos=0; 
 //apuna = aprobaron al menos 1
 //apfinal= aprobaron solo el examen final
 //aptodos = aprobaron los 3 examenes
  
 for (int x=1; x<=5; x++){
  cout << "Digite la calificacion del examen 1 del alumno "<<x<<": ";
  cin >> calif1;
  cout << "Digite la calificacion del examen 2 del alumno "<<x<<": ";
  cin >> calif2;
  cout << "Digite la calificacion del examen 3 del alumno "<<x<<": ";
  cin >> calif3;
  
  if (calif1>=7.0 && calif2>=7.0 && calif3>=7.0)
  {
   aptodos++;
  }
  if (calif1>=7.0 ||calif2>=7.0 ||calif3>=7.0)
  {
   apuna++;
  }
  if (calif1<7.0 && calif2<7.0 && calif3>=7.0)
  {
   apfinal++;
  }
 }
 cout <<"\nAlumnos que aprobaron todo: "<<aptodos;
 cout<<"\nAlumnos que aprobaron al menos uno: "<<apuna;
   printf("\nAlumnos que aprobaron solo el ultimo:%d ",apfinal);
   printf("\n\n");
 
 system ("pause");
 return 0;
}

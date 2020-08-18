/* 12. Hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6...n
*/

#include <iostream>
#include <stdlib.h>

using namespace std;
int main (){
 int n,i,suma1;
 cout<<"Sea la formula: "<<endl;
 cout<<"  1-2+3-4+5-6+...n"<<endl;
 cout<<"Ingrese n-simo termino: ";
 cin>>n;
 suma1=0;
 for(i=1;i<=n;i++){
  if(i%2==0)
   suma1=suma1-i;
  else
   suma1=suma1+i;
 }
  
 cout<<"El total para los n primeros terminos es "<<suma1<<endl;
 system("pause");
 
}

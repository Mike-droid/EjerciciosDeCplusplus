/*8. Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona y un valor de
tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que
contenga las personas con discapacidad.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct PERSONA {
 char nombre[15];
 int discapacidad;
}per[100];

struct PERSONA_DIS{
 char nombredis[15]; 
}perdisc[100];

struct PERSONA_NO{
 char nombrenodis[15];
}pernodisc[100];

int main (){
	
 int n1,conteo1=0,conteo2=0,n3;
 cout<<"DIGITE EL NUMERO DE PERSONAS : ";
 cin>>n1;
 
 for(int n2=0;n2<n1;n2++){
  fflush(stdin);
  cout<<"DIGITE EL NOMBRE DE LA PERSONA "<<n2+1<<" : ";
  cin.getline(per[n2].nombre,15,'\n');
  cout<<"LA PERSONA ES DISCAPACITADA CON UN 1 Y SI NO LO ES CON UN 0 : ";
  cin>>per[n2].discapacidad;
  
  if(per[n2].discapacidad==1){
  strncpy(perdisc[conteo1].nombredis,per[n2].nombre,15); 
  conteo1++;
  }
  
  if(per[n2].discapacidad==0){ 
    strncpy(pernodisc[conteo2].nombrenodis,per[n2].nombre,15);   
 conteo2++; }
 
 }
 for(int n2=0;n2<conteo1;n2++){
  cout<<" EL DISCAPACITADO NUMERO "<<n2+1<<" ES : "<<perdisc[n2].nombredis<<endl;
        
 }
 for(int n3=0;n3<conteo2;n3++){
  cout<<" EL SANO NUMERO "<<n3+1<<" ES : "<<pernodisc[n3].nombrenodis<<endl;
 }
 getch();
 return 0 ;
}

/*Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que
represente el n�mero total de d�as desde la fecha 1/1/2000 y par�metros de 
referencia nombrados a�o,mes y d�a. La funci�n es calcular el a�o, mes y d�a
actual para el n�mero dado de d�as que se le transmitan. Para este problema
suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.*/

#include <iostream>
#include <conio.h>
using namespace std;

int cal_amos(int, int&, int&, int&);

int main(){
 int total, dias, mes, amos;
 
 cout<<"\nPor favor teclea los dias y te dire la fecha que ha pasado desde el 1/1/2000 \n";cin>>total;
 
 cal_amos(total, dias, mes, amos); 
 
 cout<<"\nEl tiempo que ha pasado desde 1/1/2000 es: \t"<<dias+1<<"/"<<mes+1<<"/"<<amos+2000;
 
 getch();
 return 0;
}

int cal_amos(int total, int& dias, int& mes, int& amos){
 amos=total/365; 
 mes=(total%365)/30; 
 dias=((total%365)%30); 
}

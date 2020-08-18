/*Escriba una función nombrada calc_años() que tenga un parámetro entero que
represente el número total de días desde la fecha 1/1/2000 y parámetros de 
referencia nombrados año,mes y día. La función es calcular el año, mes y día
actual para el número dado de días que se le transmitan. Para este problema
suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

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

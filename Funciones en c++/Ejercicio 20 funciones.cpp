/*Ejercicio 20: Realice una función recursiva para la serie Fibonacci
Nota: La serie de Fibonacci está formada por la secuencia de números:
0,1,1,2,3,5,8,13,21,34...
*/
#include <iostream>
#include<conio.h>
using namespace std;

int Fibonacci(int);

int main(){
int a;
cout<<"Digite el maximo de numeros a mostrar: ";
cin>>a;
cout<<"\nFibonacci Secuencia: "<<endl<<endl;

 for(int x=0;x<=a;x++){
    cout<<Fibonacci(x);
        if(x==a){
    cout<<" ";
}else{
    cout<<"+";
}
}

getch();
return 0;
}

int Fibonacci(int a){
if(a<2){
    return a;
}else{
return Fibonacci(a-1) + Fibonacci(a-2);
}
}

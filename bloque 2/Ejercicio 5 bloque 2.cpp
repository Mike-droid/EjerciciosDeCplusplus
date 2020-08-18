/* 5. Escriba un fragmento de programa
que intercambie los valores de dos
variables.
*/

#include<iostream>

using namespace std;

int main(){
	int a,b,aux;
	
	cout<<"Digite el valor de a:";
	cin>>a;
	cout<<endl;
	cout<<"Digite el valor de b:";
	cin>>b;
	
	aux = a;
	 a=b;
	 b = aux;
	
	cout<<"\nEl nuevo valor de a es "<<a<<endl;
	cout<<"El nuevo valor de b es "<<b<<endl;
	
	
	
	return 0;
}

//4. Escribe la siguiente expresión matemática como expresión en C++

// a + (b/(c-d))

#include <iostream>

using namespace std;

int main(){
	float a,b,c,d, resultado=0;
	
	cout<<"\nIngresa el valor de a "; cin>>a;
	cout<<"\nIngresa el valor de b "; cin>>b;
	cout<<"\nIngresa el valor de c "; cin>>c;
	cout<<"\nIngresa el valor de d "; cin>>d;
	
	resultado=a + (b/(c-d));
	cout<<"El resultado de a + (b/(c-d)) es "<<resultado<<endl;
	
	return 0;
}

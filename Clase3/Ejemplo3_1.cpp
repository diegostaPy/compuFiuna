#include <iostream>
using namespace std;

int suma(int a, int b){ //Definici�n y declaraci�n
	return a+b;
}

int main(){
	int a,b;
	cout<<"Ingrese a: "; cin>>a;
	cout<<"Ingrese b: "; cin>>b;
	cout<<"La suma es: "<<suma(a,b)<<endl;
	system("pause");
	return 0;
}

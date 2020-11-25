#include <iostream>
using namespace std;

int suma(int, int); //Declaración

int main(){
	int a,b;
	cout<<"Ingrese a: "; cin>>a;
	cout<<"Ingrese b: "; cin>>b;
	cout<<"La suma es: "<<suma(a,b)<<endl;
	system("pause");
	return 0;
}

int suma(int a, int b){ //Definición
	return a+b;
}

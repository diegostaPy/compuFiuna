#include <iostream>
using namespace std;

int suma(int a, int b){
	int c;
	c = a+b;
	return c;
}

int main() {
	int a,b;
	cout<<"Ingrese a: "; cin>>a;
	cout<<"Ingrese b: "; cin>>b;
	int c = suma(a,b);
	cout<<"La suma es: "<<c<<endl;
	system("pause");
	return 0;
}

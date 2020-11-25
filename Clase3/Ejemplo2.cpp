#include <iostream>
using namespace std;

int suma(int a, int b){ //Función
	return a+b;
}

void mostrarValor(int a){ //Procedimiento
	cout<<"El valor es: "<<a<<endl;
}

int main () {
	int a,b;
	cout<<"Ingrese a: "; cin>>a;
	cout<<"Ingrese b: "; cin>>b;
	int c = suma(a,b)+10; //invocacion de suma
	mostrarValor(c); //invocarion de mostrarValor
	system("pause");
	return 0;
}

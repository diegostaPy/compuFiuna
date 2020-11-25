#include <iostream>
using namespace std;

int esPar(int);

int main(){
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	if(esPar(n)) cout<<"El numero es par."<<endl;
	else cout<<"El numero es impar."<<endl;
	system("pause");
	return 0;
}

int esPar(int x){
	if(x%2==0) return 1;
	else return 0;
}

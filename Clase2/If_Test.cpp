#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	if(num>0) 
		cout<<"\nTest0"; //marcar� error
		if(num==1) 
			cout<<"num es igual a 1";
			cout<<"\nTest1"; //marcar� error
		else 
			cout<<"num es mayor que 1";
			cout<<"\nTest2"; //marcar� error
	else 
		cout<<"num es menor que 1"; 
		cout<<"\nTest3"; //imprimir� siempre!
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	if(n<0)
		cout<<"\nEs un nro. negativo"<<endl;
	else
		cout<<"\nEs un nro. mayor o igual a cero"<<endl;
	return 0;
}

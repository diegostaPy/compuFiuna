#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	if(n>0 && n%2==0) // && es and (y)
		cout<<"\nEs un nro. mayor a 100 y es par"<<endl;
	return 0;
}

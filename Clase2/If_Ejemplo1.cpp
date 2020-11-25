#include<iostream>
#include<cstdlib> //para el system("pause")
using namespace std;

int main(){
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	if(n<0)
		cout<<"\nEs un nro. negativo"<<endl;
	system("pause");
	return 0;
}

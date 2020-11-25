#include <iostream>
using namespace std;

int main(){
	int m,n,i,combinaciones;
	cout<<"Ingrese n: "; cin>>n;
	cout<<"Ingrese m: "; cin>>m;
	long long d=1,e=1,f=1;
	for(i=1;i<=n;i++) d*=i;
	for(i=1;i<=m;i++) e*=i;
	for(i=1;i<=(n-m);i++) f*=i;
	combinaciones = d/(e*f);
	cout<<"El nro de combinaciones es: "<<combinaciones<<endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;
 
int main () {
	int nro1,nro2,a,b,mcd,r;
	cout<<"Ingrese el primer numero: ";
	cin>>nro1;
	cout<<"Ingrese el segundo numero: ";
	cin>>nro2;
	a=nro1; b=nro2; r=a%b;
	while(r>0){
		a = b;
		b = r;
		r = a%b;
	}
	mcd = b;
	cout<<"\nEl MCD de "<<nro1<<" y "<<nro2<<" es: "<<mcd<<endl;
	return 0;
}

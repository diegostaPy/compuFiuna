#include <iostream>
using namespace std;

int mcd(int a, int b){
	int r = a%b;
	if(r==0) return b;
	else return mcd(b,r);
}

int main(){
    int nro1,nro2;
	cout<<"Ingrese el primer numero: "; cin>>nro1;
	cout<<"Ingrese el segundo numero: "; cin>>nro2;
	cout<<"\nEl MCD de "<<nro1<<" y "<<nro2<<" es: "<<mcd(nro1,nro2)<<endl;
    return 0;
}

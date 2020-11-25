#include <iostream>
using namespace std;

int mcd(int a, int b){
    if(b==0) return a;
    else return mcd(b,a%b);
}

int main(){
    int nro1,nro2;
	cout<<"Ingrese el primer numero: "; cin>>nro1;
	cout<<"Ingrese el segundo numero: "; cin>>nro2;
	cout<<"\nEl MCD de "<<nro1<<" y "<<nro2<<" es: "<<mcd(nro1,nro2)<<endl;
    return 0;
}

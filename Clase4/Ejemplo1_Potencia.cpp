#include <iostream>
using namespace std;

long long potencia(int a,int b){
    if(b==0) return 1;
    return (a*potencia(a,(b-1)));
}

int main(){
    int a,b;
    cout<<"Ingrese la base: "; cin>>a;
    cout<<"Ingrese el exponente: "; cin>>b;
    cout<<"\nEl valor de "<<a<<"^"<<b<<" es: "<<potencia(a,b)<<endl;
    return 0;
}

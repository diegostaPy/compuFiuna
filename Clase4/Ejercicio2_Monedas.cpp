#include <iostream>
using namespace std;

int cantidad(int);

int main(){
    int n,m;
    cout<<"Ingrese el valor de la moneda: ";
    cin>>n;
    m=cantidad(n);
    cout<<"\nLa cantidad de dolares es: "<<m<<endl;
    return 0;
}

int cantidad(int x){
    if(x==0) return 0;
    int a,b,c,y;
    a=x/2;
    b=x/3;
    c=x/4;
    y=cantidad(a)+cantidad(b)+cantidad(c);
    if(x>y) return x;
    else return y;
}

#include <iostream>
using namespace std;

long long fiboRec(int i){
    if(i==1) return 0;
    if(i==2) return 1;
    return (fiboRec(i-1)+fiboRec(i-2));
}

int main(){
    int n;
    cout<<"Ingrese el numero del termino cuyo valor se desea conocer: ";
    cin>>n;
    cout<<"\nEl valor del termino "<<n<<" de la serie de Fibonacci es: "<<fiboRec(n)<<endl;
    return 0;
}

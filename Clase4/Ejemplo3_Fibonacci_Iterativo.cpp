#include <iostream>
using namespace std;

long long fiboIter(int i){
    if(i==1) return 0;
    if(i==2) return 1;
    long long a=0,b=1,f;
	int j;
    for(j=3;j<=i;j++){
    	f=a+b; a=b; b=f;
	}
	return f;
}

int main(){
    int n;
    cout<<"Ingrese el numero del termino cuyo valor se desea conocer: ";
    cin>>n;
    cout<<"\nEl valor del termino "<<n<<" de la serie de Fibonacci es: "<<fiboIter(n)<<endl;
    return 0;
}

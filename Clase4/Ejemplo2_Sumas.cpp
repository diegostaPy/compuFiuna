#include <iostream>
using namespace std;

int sumasA(int i){
    if(i==0) return 0;
    else return (i+sumasA(i-1));
}
int sumasB(int i,int N){
    if(i==N) return N;
    else return (i+sumasB(i-N));
}

int main(){
	int N;
	cout<<"Ingrese el valor de N: "; cin>>N;
	cout<<"\nEl valor de la suma del 1 a "<<N<<" es: "<<sumasA(N)<<endl;
	cout<<"\nEl valor de la suma del 1 a "<<N<<" es: "<<sumasB(1,N)<<endl;

	return 0;
}
int fibonacci (int n){
if (n == 1)
   return 0;
else
   if ( (n == 2))
     return 1;
   else
     return fibonacci(n-1) +fibonacci(n-2);
}

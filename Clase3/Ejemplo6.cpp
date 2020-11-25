#include <iostream>
using namespace std;

int combinacion(int, int);
long long factorial(int);

int main(){
	int m,n;
	cout<<"Ingrese n: "; cin>>n;
	cout<<"Ingrese m: "; cin>>m;
	cout<<"El nro de combinaciones es: "<<combinacion(m,n)<<endl;
	system("pause");
	return 0;
}

int combinacion(int m, int n){ //Definición
	return factorial(n)/(factorial(m)*factorial(n-m));
}

long long factorial(int n){
	if(n<0){
		cout<<"Error: numero negativo para el factorial: "<<n<<endl;
		exit(-1);
	}
	int i;
	long long f=1;
	for(i=1;i<=n;i++) f*=i;
	return f;
}

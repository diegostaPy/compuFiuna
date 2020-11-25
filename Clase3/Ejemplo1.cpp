#include <iostream>
using namespace std;

int potencia(int , int );
void imprimir(){
	cout<<"Hola desde la función"<<endl;
} 
int main () {
	int a,b;
	long long c;
	cout<<sizeof(c);
	cout<<"Ingrese a: ";
	cin>>a;
	cout<<"Ingrese b: ";
	cin>>b;
	imprimir();
	int pot = potencia(a,b);
	cout<<"\nEl valor de "<<a<<"^"<<b<<" es: "<<pot<<endl;
	
	system("pause");
	return 0;
}

int potencia(int x, int y){
	int p=1;
	int i;
	int suma=1;
	imprimir();
	for(i=0;i<y;i++) {
		suma=suma+ p*x;
		p*=x;//p=p*x es un acumulador mulplicativo
		///suma=suma+p;
		}
	
	return suma;
}

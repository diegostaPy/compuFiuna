/*Ejemplo 4: Diseñar un programa que calcule el producto escalar de dos vectores A y B de N elementos (numeros reales).
Este programa debe contar con una funcion "escalar" que reciba dos vectores (y el tamaño de ambos) y devuelva el producto escalar.*/

#include <iostream>
using namespace std;

double escalar(double a[], double b[], int n){
	double esc=0.0;
	int i;
	for(i=0;i<n;i++) esc += (a[i]*b[i]);
	return esc;
}

int main(){
    //Se ingresa el valor de N
    int N;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>N;
	//Se declaran los vectores
	double A[N],B[N];
	//Se carga el vector A
	int i;
	for(i=0;i<N;i++){
		cout<<"Ingrese A["<<i<<"]: ";
		cin>>A[i];
	}
	//Se carga el vector B
	for(i=0;i<N;i++){
		cout<<"Ingrese B["<<i<<"]: ";
		cin>>B[i];
	}
	double prodEsc = escalar(A,B,N);
	cout<<"El producto escalar es: "<<prodEsc<<endl;
    return 0;
}

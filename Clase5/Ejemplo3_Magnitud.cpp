/*Ejemplo 3: Diseñar un programa que calcule la magnitud de un vector A de N elementos (numeros reales).
Este programa debe contar con una funcion "magnitud" que reciba un vector y su cantidad de elementos, y devuelva la magnitud del vector.*/

#include<iostream>
#include<cmath> 
using namespace std;

double magnitud(double x[], int n){
	double suma=0.0;
	int i;
	for(i=0;i<n;i++) suma += (x[i]*x[i]);
	return sqrt(suma);
}

int main(){
    //Se ingresa el valor de N
    int N;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>N;
	//Se declara el vector
	double A[N];
	//Se carga el vector A
	int i;
	for(i=0;i<N;i++){
		cout<<"Ingrese A["<<i<<"]: ";
		cin>>A[i];
	}
	//Se devuelve la magnitud
	double m = magnitud(A,N);
	cout<<"La magnitud es: "<<m<<endl;
    return 0;
}

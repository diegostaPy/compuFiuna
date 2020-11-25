/*Ejemplo 5: Escribir una funcion que reciba un vector de enteros y su tamaño, y que pase cada elemento a la posicion derecha.
El elemento final del vector pasa al inicio*/

#include <iostream>
using namespace std;

void rotar(int x[], int n){
	int aux = x[n-1];
	int i;
	for(i=n-1; i>0; i--) x[i]=x[i-1];
	x[0]=aux;
}

int main(){
    //Se ingresa el tamaño del vector
	int N;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>N;
    //Se declara el vector
	int A[N];
	//Se carga el vector
	int i;
	for(i=0;i<N;i++){
		cout<<"Ingrese A["<<i<<"]: ";
		cin>>A[i];
	}
	//Se realiza el proceso
	cout<<"El vector original es: "<<endl;
	for(i=0;i<N;i++) cout<<A[i]<<"\t";
	rotar(A,N);
	cout<<"\nEl vector resultante es: "<<endl;
	for(i=0;i<N;i++) cout<<A[i]<<"\t";
	cout<<endl;
	system("pause");
    return 0;
}

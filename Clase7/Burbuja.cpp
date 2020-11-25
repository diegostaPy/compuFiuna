/*Ordenamiento por burbuja.*/

#include <iostream>
#include <cstdlib>
using namespace std;

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<"\t"; cout<<endl;
}

void ordenarVecBurbuja(int A[], int N){
	int i,j,aux;
	for(i=0;i<N-1;i++){
		for(j=0;j<(N-i-1);j++){
			if(A[j]>A[j+1]){
				//Intercambiar A[j] y A[j+1]
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}
	}
}

int main(){
	//Se ingresa el tamaño del vector
	int N;
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>N;
	//Se declara el vector
	int A[N];
	//Se carga el vector
	int i,j;
	for(i=0;i<N;i++){
		cout<<"Ingrese A["<<i<<"]: ";
		cin>>A[i];
	}
	//Se muestra el vector original
	cout<<endl<<"Vector original:"<<endl;
	imprimirVector(A,N);
	
	//Ordenamiento por burbuja
	ordenarVecBurbuja(A,N);
	
	//Se muestra el vector ordenado
	cout<<endl<<"Vector ordenado:"<<endl;
	imprimirVector(A,N);
	system("pause");
    return 0;
}

/*Ordenamiento por burbuja - Versi�n mejorada*/

#include <iostream>
#include <cstdlib>
using namespace std;

enum binario{
	falso,
	verdadero
};

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<"\t"; cout<<endl;
}

void ordenarVecBurbujaMejora(int A[], int N){
	int i=0,j,aux,continuar;
	do{
		continuar=falso;
		for(j=0;j<(N-i-1);j++){
			if(A[j]>A[j+1]){
				//Intercambiar A[j] y A[j+1]
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
				continuar=verdadero;
			}
		}
		i++;
	}while(continuar);
}

int main(){
	//Se ingresa el tama�o del vector
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
	ordenarVecBurbujaMejora(A,N);
	
	//Se muestra el vector ordenado
	cout<<endl<<"Vector ordenado:"<<endl;
	imprimirVector(A,N);
	system("pause");
    return 0;
}

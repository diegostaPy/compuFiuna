/*Ordenamiento por insercion.*/

#include <iostream>
#include <cstdlib>
using namespace std;

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<"\t"; cout<<endl;
}

void ordenarVecInsercion(int A[], int N){
	int i,j,aux,posEncontrada;
	for(i=1;i<N;i++){
		aux = A[i];
		posEncontrada=0; /*indica si ya se encontró la posición del nuevo elemento*/
		j=i-1;
		while((j>=0)&&(!posEncontrada)){
			if(A[j]>aux){
				//Se desplaza a la derecha
				A[j+1]=A[j];
				j=j-1; //j--
			}
			else posEncontrada=1;
		}
		//Se coloca el nuevo elemento
		A[j+1]=aux;
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
	
	//Ordenamiento por insercion
	ordenarVecInsercion(A,N);
	
	//Se muestra el vector ordenado
	cout<<endl<<"Vector ordenado:"<<endl;
	imprimirVector(A,N);
	system("pause");
    return 0;
}

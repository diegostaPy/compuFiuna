/*Ordenamiento por seleccion.*/

#include <iostream>
#include <cstdlib>
using namespace std;

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<"\t"; cout<<endl;
}

void ordenarVecSeleccion(int x[], int n){
	int i,j,aux,pos; /*indicarán el valor y la posición del menor elemento del subarreglo*/
	for(i=0;i<n;i++){
		aux = x[i];
		pos = i;
		for(j=(i+1);j<n;j++){
			if(x[j]<aux){
				aux=x[j];
				pos=j;
			}
		}
		//Intercambio
		x[pos]=x[i];
		x[i]=aux;
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
	
	//Ordenamiento por seleccion
	ordenarVecSeleccion(A,N);
	
	//Se muestra el vector ordenado
	cout<<endl<<"Vector ordenado:"<<endl;
	imprimirVector(A,N);
	system("pause");
    return 0;
}

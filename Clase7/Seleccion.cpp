/*Ordenamiento por seleccion.*/

#include <iostream>
#include <cstdlib>
using namespace std;

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
	for(i=0;i<N;i++) cout<<A[i]<<"\t"; cout<<endl;
	
	//Ordenamiento por seleccion
	int aux,pos;
	for(i=0;i<N;i++){
		aux = A[i];
		pos = i;
		for(j=(i+1);j<N;j++){
			if(A[j]<aux){
				aux=A[j];
				pos=j;
			}
		}
		//Intercambio
		A[pos]=A[i];
		A[i]=aux;
	}
	
	//Se muestra el vector ordenado
	cout<<endl<<"Vector ordenado:"<<endl;
	for(i=0;i<N;i++) cout<<A[i]<<"\t"; cout<<endl;
	system("pause");
    return 0;
}

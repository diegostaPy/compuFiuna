#include <iostream>
using namespace std;

void ordenarVecBurbujaMejora(int A[], int N){
	int i=0,j,aux,continuar;
	do{
		continuar=0;
		for(j=0;j<(N-i-1);j++){
			if(A[j]>A[j+1]){
				//Intercambiar A[j] y A[j+1]
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
				continuar=1;
			}
		}
		i++;
	}while(continuar);
}

int main(){
	//Se ingresa la cantidad de filas y la de columnas
	int M,N,i,j;
	cout<<"Ingrese la cantidad de filas: "; cin>>M;
	cout<<"Ingrese la cantidad de columnas: "; cin>>N;
	
	//Se declara la matriz
	int A[M][N];
	
	//Se carga la matriz
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}
	}
	
	//Se muestra la matriz original
	cout<<"\n\nLa matriz original es: "<<endl;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//Se pasan los elementos de la matriz a un vector
	int cont=0, B[M*N];
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			B[cont]=A[i][j];
			cont++;
		}
	}
	
	//Ordenamiento por burbuja
	ordenarVecBurbujaMejora(B,M*N);
	
	//Se pasan los elementos ordenados a la matriz
	cont=0;
	for(i=0;i<M;i++){
		if(i%2==0){
			for(j=0;j<N;j++){
				A[i][j]=B[cont];
				cont++;
			}
		}
		else{
			for(j=N-1;j>=0;j--){
				A[i][j]=B[cont];
				cont++;
			}
		}
	}
	
	//Se muestra la matriz de salida
	cout<<"\n\nLa matriz ordenada es: "<<endl;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	system("pause");
    return 0;
}

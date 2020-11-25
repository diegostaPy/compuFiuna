#include<iostream>
using namespace std;

int main(){
    int i,j,M,N;
    cout<<"Ingrese el numero de filas: "; cin>>M;
    cout<<"Ingrese el numero de columnas: "; cin>>N;
    int A[M][N];
    //Lectura de elementos de la matrix
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			cout<<"Ingrese A["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}
	}
	
	//Obtencion de la matriz transpuesta
	int B[N][M];
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			B[j][i]=A[i][j];
		}
	}
	
	//Impresion de A
	cout<<"\nMatriz A:\n";
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//Impresion de B
	cout<<"\nMatriz B:\n";
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			cout<<B[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}


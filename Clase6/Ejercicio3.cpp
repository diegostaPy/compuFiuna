#include<iostream>
using namespace std;

int main(){
    int i,j,N;
    cout<<"Ingrese el numero de filas/columnas: "; cin>>N;
    float A[N][N];
    
	//Lectura de elementos de la matrix
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<"Ingrese A["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
		}
	}
	
	//Impresion de A
	cout<<"\nMatriz A:\n";
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	float sumDiagPrin=0.0,sumDiagSec=0.0;
	for(i=0;i<N;i++){
		sumDiagPrin+=A[i][i];
		sumDiagSec+=A[i][N-1-i];
	}
	
	//Otra forma
	/*for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j) sumDiagPrin+=A[i][j];
			if((i+j)==(N-1)) sumDiagSec+=A[i][j];
		}
	}*/
	
	
	//Resultados
	cout<<"\nLa suma de los elementos de la diagonal principal es: "<<sumDiagPrin<<endl;
	cout<<"La suma de los elementos de la diagonal secundaria es: "<<sumDiagSec<<endl;
	
	system("pause");
	return 0;
}


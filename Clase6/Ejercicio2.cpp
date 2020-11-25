#include<iostream>
using namespace std;

int main(){
    int i,j,N;
    cout<<"Ingrese el numero de filas/columnas: "; cin>>N;
    int A[N][N];
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
	
	//Verificacion de la condicion
	int esSimetrica=1;
	for(i=0;i<N && esSimetrica;i++){
		for(j=0;j<N;j++){
			if(A[i][j]!=A[j][i]){
				esSimetrica=0;
				break;
			}
		}
	}
	
	if(esSimetrica) cout<<"\nLa matriz A es simetrica\n";
	else cout<<"\nLa matriz A no es simetrica\n";
	system("pause");
	return 0;
}


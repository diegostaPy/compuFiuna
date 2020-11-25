#include <iostream>
using namespace std;
int n;

void imprimirMatriz(int A[][3], int m, int n){
	int i,j;
	cout<<"La matriz es: "<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int m=4,n=3;
	int b[m][3]={{1,2,3},{4,5,6},
	{7,8,9},{10,11,12}};
	imprimirMatriz(b,m,n);
	system("pause");
	return 0;
}


#include <iostream>
using namespace std;

void imprimirMatriz(int *p[], int m, int n){
	int i,j;
	cout<<"La matriz es: "<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<*(p[i]+j)<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int i,m=4,n=3;
	int b[m][n]={{1,2,3},{4,5,6},
	{7,8,9},{10,11,12}};
	int *q[m];
	for(i=0;i<m;i++){
		q[i]=&b[i][0];
	}
	imprimirMatriz(q,m,n);
	system("pause");
	return 0;
}


#include <iostream>
using namespace std;
void ordenar(int A[], int n);
int busquedaBinaria(int A[],int,int,int);
int main(){
int lA=9;
int n,i;
int A[]={7,5,1,15,19,7,30,45};
cout<<"Ingrese el numero que desea buscar:";
cin>>n;
ordenar(A,lA);
for(i=0;i<(lA);i++)
{
	cout<<A[i]<<endl;
}
//cout<<busquedaBinaria(A,0,lA-1,n);
return 0;
}
void ordenar(int A[], int n){
int i,j,aux;
for(j=0;j<n;j++)
	{	
	for(i=0;i<(n-1);i++)
		{
		if(A[i+1]>A[i]){
			aux=A[i];
			A[i]=A[i+1];
			A[i+1]=aux;
				}
		
		}
	}


}
int busquedaBinaria(int A[],int limI,int limS,int n){
cout<<limI<<limS<<(limI+limS)/2<<endl;
if(limS>=limI){
	int mid=(limI+limS)/2;
	if(A[mid]==n  ){
		return mid;

	}else if(A[mid]<n){

		busquedaBinaria(A,mid+1,limS,n);
	}else{
		//A[mid]<n
		busquedaBinaria(A,limI,mid-1,n);
	}
}else{

	return -1;
}
}









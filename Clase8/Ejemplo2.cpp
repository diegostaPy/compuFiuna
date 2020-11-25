#include <iostream>
using namespace std;

void imprimirVectorOld(int vec[], int n){
	int i;
	cout<<"El vector es: "<<endl;
	for(i=0;i<n;i++) cout<<vec[i]<<"\t";
	cout<<endl;
}
void imprimirVector(int *p, int n){
	int i;
	cout<<"El vector es: "<<endl;
	for(i=0;i<n;i++) cout<<*(p+i)<<"\t";
	for(i=0;i<n;i++) cout<<p[i]<<"\t";
	for(i=0;i<n;i++) {
			cout<<*p<<"\t";
			p++;
			}
	cout<<endl;
}

int main(){
	int n=4, b[]={1,2,3,4};
	imprimirVector(b,n);
	system("pause");
	return 0;
}


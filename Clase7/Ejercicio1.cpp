#include <iostream>
using namespace std;

void imprimirVector(int x[], int n){
	int i;
	for(i=0;i<n;i++) cout<<x[i]<<"\t"; 
	cout<<endl;
}

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

int nroElementosDistintos(int x[], int n){
	//Los elementos ya estan ordenados! Ej: 8 8 8 14 23 23 23 27 27 27 27
	int i, cant=1, ref=x[0];
	for(i=0;i<n;i++){
		if(x[i]!=ref){
			ref=x[i];
			cant++;
		}
	}
	return cant;
}

void obtenerL2(int a[], int n, int b[]){
	//Los elementos ya estan ordenados! Ej: 8 8 8 14 23 23 23 27 27 27 27
	int i, cont=1, pos=0, ref=a[0];
	for(i=1;i<n;i++){
		if(a[i]!=ref){
			b[pos]=ref; pos++;
			b[pos]=cont; pos++;
			ref=a[i];
			cont=1;
		}
		else cont++;
	}
	b[pos]=ref; pos++;
	b[pos]=cont; pos++;
}

int main(){
	//Se ingresa el tamaño del vector
	int N;
	cout<<"Ingrese la cantidad de elementos: ";
	cin>>N;
	//Se declara el vector
	int L1[N];
	//Se carga el vector
	int i,j;
	for(i=0;i<N;i++){
		cout<<"Ingrese L1["<<i<<"]: ";
		cin>>L1[i];
	}
	//Se muestra el vector original
	cout<<endl<<"Vector L1:"<<endl;
	imprimirVector(L1,N);
	
	//Ordenamiento por burbuja
	ordenarVecBurbujaMejora(L1,N);
	
	//Contar cantidad de elementos distintos
	int cantidad = nroElementosDistintos(L1,N);
	cout<<"\nLa cantidad de elementos distintos es: "<<cantidad<<endl;
	
	//Obtencion de L2
	int L2[cantidad*2];
	obtenerL2(L1,N,L2);
	
	//Se muestra el vector de salida
	cout<<endl<<"El vector L2 es:"<<endl;
	imprimirVector(L2,cantidad*2);
	
	system("pause");
    return 0;
}

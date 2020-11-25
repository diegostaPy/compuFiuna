/*Ejemplo 2: Se tienen las temperaturas (promedio) de todos los días del mes de febrero de 2018 almacenados en el vector tempFeb. 
Diseñar un programa que obtenga las temperaturas máxima,  mínima (e indica los días correspondientes), 
y el promedio de las que se encuentran entre los días 21 y 27.*/

#include <iostream>
using namespace std;

int main(){
    //Se declara el vector
	int diasFeb=28;
	double tempFeb[diasFeb];
	//Se carga el vector
	//Nota: la posicion 0 corresponde al dia 1
	int i;
	for(i=0;i<diasFeb;i++){
		cout<<"Ingrese temperatura del "<<(i+1)<<"/Feb: ";
		cin>>tempFeb[i];
	}
	//Se calculan los valores pedidos
	double minima=tempFeb[0],maxima=tempFeb[0],suma=0.0,prom;
	int diaMax=0,diaMin=0; //dias con la temperatura maxima y minima, respectivamente
	for(i=0;i<diasFeb;i++){
		if(tempFeb[i]<minima){
			minima=tempFeb[i];
			diaMin=i;
		}
		if(tempFeb[i]>maxima){
			maxima=tempFeb[i];
			diaMax=i;
		}
	}
	for(i=20;i<27;i++) suma+=tempFeb[i];
	prom = suma/7;
	cout<<"El dia con menor temperatura fue el "<<(diaMin+1)<<"/Feb con "<<minima<<" grados."<<endl;
	cout<<"El dia con mayor temperatura fue el "<<(diaMax+1)<<"/Feb con "<<maxima<<" grados."<<endl;
	cout<<"El promedio de los dias 21 al 27 fue de "<<prom<<" grados."<<endl;
	system("pause");
    return 0;
}

#include<iostream>
using namespace std;

int main(){
	int calificacion,puntaje;
	cout<<"Ingrese el puntaje: ";
	cin>>puntaje;
	if(puntaje>=90 && puntaje<=100) calificacion = 5;
	if(puntaje>=80 && puntaje<90) calificacion = 4;
	if(puntaje>=70 && puntaje<80) calificacion = 3;
	if(puntaje>=60 && puntaje<70) calificacion = 2;
	if(puntaje<60) calificacion = 1;
	cout<<"\nLa calificacion es: "<<calificacion<<endl;
	return 0;
}

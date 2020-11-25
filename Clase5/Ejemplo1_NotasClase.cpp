/*Ejemplo 1: Calcular la cantidad de alumnos que obtuvieron nota inferior al promedio del curso en cierta materia. 
Hay N alumnos (donde N es un valor entero positivo ingresado por teclado), y todos rindieron. 
Las notas son numeros enteros que van del 0 al 100 (se asume que todas las notas son correctas).*/

#include <iostream>
using namespace std;

int main(){
    //Se ingresa el tamaño del vector
	int N;
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>N;
    //Se declara el vector
	int notas[N];
	//Se carga el vector
	int i;
	for(i=0;i<N;i++){
		cout<<"Ingrese notas["<<i<<"]: ";
		cin>>notas[i];
	}
	//Se calcula el promedio
	int suma=0;
	for(i=0;i<N;i++) suma+=notas[i];
	float prom = 1.0*suma/N;
	//Se cuentan las notas menores que el promedio
	int menores = 0;
	for(i=0;i<N;i++){
		if(prom>notas[i]) menores++;
	}
	cout<<"El promedio es: "<<prom<<endl;
	cout<<"La cantidad de alumnos con nota inferior al promedio es: "<<menores<<endl;
	system("pause");
    return 0;
}

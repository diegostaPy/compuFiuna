#include <iostream>
/**
Crear una estructura de datos Alumno para calcular la nota final (NF) 
de los 5 alumnos del curso Programacion, así como también el promedio, 
el mínimo y el máximo de las notas. 
Leer por teclado el código del alumno y los puntajes parciales (P1 y P2) 
y puntaje final (EF) de cada uno de éstos (enteros de 0 a 100, validar)

El puntaje final se calcula empleando la fórmula: PF = 0.6*PP + 0.4*EF
En donde PP es el promedio de parciales: PP = (P1+P2)/2

La nota final (NF) se determina mediante la siguiente tabla:
0-59 Nota 1
60-70 Nota 2
71-80 Nota 3
81-90 Nota 4
91-100 Nota 5

El cálculo de la Nota Final, el Promedio de las calificaciones así como 
la mayor y menor nota deben realizarse a través de funciones.
*/
using namespace std;
int N = 0;

struct Alumno{
    int codigo;
    int P1;
    int P2;
    int EF;
    float PP;
    int PF;
    int NF;
};//agregue la estructura

int calcularNotaFinal(int p) {
	int Nota;
	if(p<60)
	{
	Nota=1;
	}else{
	        if(p<71)
	        {
	        Nota=2;
	        }else{
	                if(p<81)
	                {
	                    Nota=3;
	                }else{
	                        if(p<91)
	                        {
	                            Nota=4;
	                        }else{
	                                Nota=5;
	                             }
	                     }
	             }
	    }
	return Nota;//complete la funcion
}

int leerPuntaje() {
	int P;
	do{
	   
	    cin>>P;
	}while(P<0 || P!=int(P)||P>100);
	return P;//complete la funcion
}

float calcularPromedio(Alumno prog[],int N) {
    float prom=0;
    for(int i=0; i<N; i++)
	{
	    prom=prom + prog[i].NF;
	}
	prom=prom/N;
	return prom;
	//complete la funcion
}

int calcularMayor(Alumno prog[],int N) {
	int Mayor=prog[0].NF;
	for(int i=0; i<N; i++)
	{
	    if(Mayor<prog[i].NF)
	    {
	        Mayor=prog[i].NF;
	    }
	}
	return Mayor;//complete la funcion
}

int calcularMenor(Alumno prog[], int N) {
		int Menor=prog[0].NF;
	for(int i=0; i<N; i++)
	{
	    if(Menor>prog[i].NF)
	    {
	       Menor=prog[i].NF;
	    }
	}
	return Menor;
}//complete la funcion

int main() {
	cin >> N;
	Alumno prog[N];//*/ declare una variable prog del tipo Alumno */
    cout << "\nIngrese el codigo, parcial 1, parcial 2 y examen final: ";
	for(int i=0; i<N; i++) {
		cout << "\nAlumno " << i+1 << ": ";
		cin>>prog[i].codigo;//*/ lea el código del alumno*/
		
		prog[i].P1 = leerPuntaje();
    	prog[i].P2 = leerPuntaje();//lea los demás puntajes de forma similar */
     	prog[i].EF = leerPuntaje();
     
       prog[i].PP=(prog[i].P1+prog[i].P2)/2;
       
       prog[i].PF=0.6*prog[i].PP+0.4*prog[i].EF;//*/ calcule el puntaje final PF */
		
		prog[i].NF=calcularNotaFinal(prog[i].PF);//*/ calcule la nota final NF llamando a la funcion calcularNotaFinal */
		
		cout << endl << "PF: " << prog[i].PF << " NF: " << prog[i].NF;
	}
	
	cout << "\nPromedio de Notas: " << calcularPromedio( prog ,N);
	cout << "\nMayor Nota: " << calcularMayor(prog ,N);
	cout << "\nMenor Nota: " << calcularMenor(prog, N);
	return 0;
}

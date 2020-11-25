#include<iostream>
using namespace std;

int main(){
	int calificacion,puntaje;
	cout<<"Ingrese el puntaje: ";
	cin>>puntaje;
	if(puntaje>=90){ //Solo por "seguridad" se usarán llaves
		calificacion = 5;
	}
	else{
		if(puntaje>=80){
			calificacion = 4;
		}
		else{
			if(puntaje>=70){
				calificacion = 3;
			}
			else{
				if(puntaje>=60){
					calificacion = 2;
				}
				else{
					calificacion = 1;
				}
			}
		}
	}
	cout<<"\nLa calificacion es: "<<calificacion<<endl;
	return 0;
}

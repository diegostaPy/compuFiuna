#include<iostream>
using namespace std;
#include<cstdlib>

struct atleta{
	int cedula;
	string apellido;
	int edad;
	float altura;
};

int main(){
	struct atleta at1;
	at1.cedula = 3644716; 
	at1.apellido = "Colbes";
	at1.edad = 33;
	at1.altura = 1.71;
	cout<<"Datos del atleta: "<<endl;
	cout<<"CI: "<<at1.cedula<<endl;
	cout<<"Apellido: "<<at1.apellido<<endl;
	cout<<"Edad: "<<at1.edad<<endl;
	cout<<"Altura: "<<at1.altura<<endl;
	system("pause");
	return 0;
}


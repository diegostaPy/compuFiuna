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
	struct atleta *p; //Puntero a variable de atleta
	p = &at1; //p apunta a at1
	p->cedula = 3644716; 
	p->apellido = "Colbes";
	p->edad = 33;
	p->altura = 1.71;
	cout<<"Datos del atleta: "<<endl;
	cout<<"CI: "<<p->cedula<<endl;
	cout<<"Apellido: "<<p->apellido<<endl;
	cout<<"Edad: "<<p->edad<<endl;
	cout<<"Altura: "<<p->altura<<endl;
	system("pause");
	return 0;
}


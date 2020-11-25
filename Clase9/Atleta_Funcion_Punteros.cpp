#include<iostream>
using namespace std;
#include<cstdlib>

struct atleta{
	int cedula;
	string apellido;
	int edad;
	float altura;
};

void cargarAtleta(struct atleta *at){
	cout<<"Ingrese Cedula: "; cin>>at->cedula; 
	cout<<"Ingrese Apellido: "; cin>>at->apellido; 
	cout<<"Ingrese Edad: "; cin>>at->edad; 
	cout<<"Ingrese Altura: "; cin>>at->altura;
}

void imprimirAtleta(struct atleta *at){
	cout<<"\nDatos del atleta: "<<endl;
	cout<<"CI: "<<at->cedula<<endl;
	cout<<"Apellido: "<<at->apellido<<endl;
	cout<<"Edad: "<<at->edad<<endl;
	cout<<"Altura: "<<at->altura<<endl;
}

int main(){
	struct atleta at1;
	cargarAtleta(&at1);
	imprimirAtleta(&at1);
	system("pause");
	return 0;
}


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
	cout<<"Ingrese Cedula: "; cin>>at1.cedula; 
	cout<<"Ingrese Apellido: "; cin>>at1.apellido; 
	cout<<"Ingrese Edad: "; cin>>at1.edad; 
	cout<<"Ingrese Altura: "; cin>>at1.altura; 
	cout<<"\nDatos del atleta: "<<endl;
	cout<<"CI: "<<at1.cedula<<endl;
	cout<<"Apellido: "<<at1.apellido<<endl;
	cout<<"Edad: "<<at1.edad<<endl;
	cout<<"Altura: "<<at1.altura<<endl;
	system("pause");
	return 0;
}


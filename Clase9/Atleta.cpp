#include<iostream>
using namespace std;
#include<cstdlib>

struct atleta{
	int cedula;
	char apellido[20];//string apellido
	int edad;
	float altura;
};

int main(){
	atleta at1 = {3644716,"Colbes",33,1.71};
	cout<<"Datos del atleta: "<<endl;
	cout<<"CI: "<<at1.cedula<<endl;
	cout<<"Apellido: "<<at1.apellido<<endl;
	cout<<"Edad: "<<at1.edad<<endl;
	cout<<"Altura: "<<at1.altura<<endl;
	system("pause");
	return 0;
}


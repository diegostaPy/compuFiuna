#include <iostream>
using namespace std;

union Emp{
	char X; //1 byte
	float Y; //4 bytes
};

int main(){
	union Emp e;
	cout<<"Tamanho: "<<sizeof(e)<<" bytes."<<endl;
	e.X = 'A';
	e.Y = 2.0;
	cout<<"Caracter: "<<e.X<<endl;
	cout<<"Nro: "<<e.Y<<endl;
	return 0;
}


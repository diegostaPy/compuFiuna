#include<iostream>
using namespace std;
#include<cstdlib>

enum numeros{
	diez = 10,
	cien = 100,
	mil = 1000,
	millon = 1000000
};

int main(){
	int a = diez+cien+mil+millon;
	cout<<"La suma es: "<<a<<endl;
	system("pause");
	return 0;
}


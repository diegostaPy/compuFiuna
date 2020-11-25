#include <iostream>
using namespace std;

void triplicar(int *x){
	*x =*x *3;
	//*x  =*3;
}

int main(){
	int a;
	cout<<"Ingrese un numero entero: ";
	cin>>a;
	triplicar(&a);
	cout<<"a: "<<a<<endl;
	system("pause");
	return 0;
}


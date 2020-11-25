#include<iostream>
using namespace std;
#include<cstdlib>
#include<cmath>

struct complejo{
	float p_real;
	float p_imag;
	float modulo;
};


int main(){
	struct complejo z;
	struct complejo *pz;
	pz=&z;
	cin>>z.p_real; cin>>z.p_imag;
	z.modulo=sqrt(z.p_real*z.p_real+(pz->p_imag)*(pz->p_imag));
	cout<<"\nNumero complejo ("<<z.p_real<<","<<z.p_imag<<")"<<endl;
	cout<<"Modulo: "<<pz->modulo<<endl;
	system("pause");
	return 0;
}



#include<iostream>
using namespace std;

int main(){
	int rendimiento;
	cout<<"Ingrese un el redimiento en porcentaje: ";
	cin>>rendimiento;
//validación
	if(rendimiento>=0&&rendimiento<=100)
		{
		if(rendimiento>=90)
			{
			cout<<"la nota es 5";
			}
		else if(rendimiento>=80)
			{
			cout<<"la nota es 4";
			
			}
		else if(rendimiento>=70)
			{
			cout<<"la nota es 3";
			
			}
		else if(rendimiento>=60)
			{
			cout<<"la nota es 2";
			}
		else
			{
			cout<<"la nota es 1";
			}
			
		
					

		}
			
	return 0;
}

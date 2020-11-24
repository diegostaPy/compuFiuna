#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cin >> num1;
	cin >> num2;
	int sum1 = 0, sum2 = 0;
	
    for(int i=1;num1+1>i;i++)
    {
        if(num1%i==0)
        {
        sum1=i+sum1;
        }
    }
    for(int i=1;num2+1>i;i++)
    {
        if(num2%i==0)
        {
            sum2=i+sum2;
        }
    }
	cout << sum1<<endl;
	cout << sum2<<endl;
	if(num1==num2)
		cout <<"Los numeros son iguales";
	else if(sum1==sum2)
		cout <<"Los numeros son amistosos";
	else
		cout << "Los numeros no son amistosos";
	return 0;
}
#include <iostream>
using namespace std;
int main(void){
	int i;
	char c;
	cout << "T" << char(97) << "bla de los numeros ASCII" << endl << endl;

	cout << "----------------------------------------------"<< endl << endl;

	for (i = 0; i < 257; i++)
		{
		c=i;
		cout << c << " <---> " << i << endl << endl;
		}

	return 0;
}

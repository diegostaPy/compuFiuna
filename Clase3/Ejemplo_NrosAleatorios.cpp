#include <iostream>
using namespace std;
#include<cstdlib> //contiene las función rand()
#include<ctime> //para inicializar rand()

int main () {
	int i=0;
	srand(time(NULL));
	for(i=0;i<10;i++){
		cout<<rand()%100<<endl;
	}
	return 0;
}

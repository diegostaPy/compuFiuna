#include <iostream>
using namespace std;

void Hanoi(int inicio, int fin, int centro, int n){
    if(n==1){
        cout<<"Mover disco 1 de la varilla "<<inicio<<" a la varilla "<<fin<<endl;
    }
    else{
        Hanoi(inicio, centro, fin, (n-1));
        cout<<"Mover disco "<<n<<" de la varilla "<<inicio<<" a la varilla "<<fin<<endl;
        Hanoi(centro, fin, inicio, (n-1));
    }
}

int main(){
    int n;
    cout<<"Ingrese el valor de n: "; cin>>n;
    Hanoi(1,3,2,n);// 1 es la varilla inicial, 2 la del centro y 3 la final.
    return 0;
}

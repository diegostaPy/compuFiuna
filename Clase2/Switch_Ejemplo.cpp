#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    switch(num){
        case 1:
            cout<<"Es un 1\n";
            break;
        case 2:
            cout<<"Es un 2\n";
            break;
        case 3:
            cout<<"Es un 3\n";
            break;
        default:
            cout<<"No es ni 1, ni 2, ni 3\n";
    }
    return 0;
}

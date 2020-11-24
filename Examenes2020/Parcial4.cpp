#include<iostream>
#include<cstring>
using namespace std;

/*Función que devuelve la cantidad de dígitos de un número n.
Se supone que n es positivo.*/
int cantDigitos(int n){
    int dig=0;
    while(n>0){
        dig++;
        n/=10;
    }
    return dig;
}

/*Función que devuelve el resultado de a^b.
Se supone que b es un número no-negativo.*/
int potencia(int a, int b){
    int i, p=1;
    for(i=0;i<b;i++) p*=a;
    return p;
}

void fmtMiles(int N, int A, char C, char sal[]){
    if(N<=0 || A<=0 || (C>='0' && C<='9') || C=='+' || C=='-') sal[0] = '\0';
    else{
        int nroDig = cantDigitos(N);
        int tamNec = nroDig + (nroDig-1)/3; //tamaño necesario, considerando los separadores de miles
        int i;
        if(A<tamNec){
            //Rellenamos la cadena sal con el caracter C
            for(i=0;i<A;i++) sal[i]=C;
        }
        else{
            //Tenemos el espacio necesario
            //Si nos sobra espacio...
            int d,cont=0;
            for(i=0;i<(A-tamNec);i++) sal[i]=C;
            //Ahora cargamos el numero
            i=A-1;
            while(i>=(A-tamNec)){
                d = N%10;
                N /= 10;
                sal[i] = d+'0';
                i--;
                cont++;
                if(cont%3==0 && N>0){ //cargamos un punto
                    sal[i] = '.';
                    i--;
                }
            }
        }
        sal[A]='\0'; //caracter de finalización de cadena
    }
}


int main(){
    // NO MODIFICAR EL MAIN!
    int N,A;
    char C;
    char salida[100];
    cin>>N;
    cin>>A;
    cin>>C;
    fmtMiles(N,A,C,salida);
    cout<<salida;
   	return 0;
}

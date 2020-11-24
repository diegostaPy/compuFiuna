#include <iostream>

using namespace std;

void ordenamientoEscalera(int* A,int fi){
 int aux;
 for(int i=0;i<fi*fi;i++){
        for(int j=0;j<(fi*fi)-1;j++){
           if(*(A+j)>*(A+j+1))
           {
          aux=*(A+j);
          *(A+j)=*(A+j+1);
          *(A+j+1)=aux;
           }
        }
        
    }
  
    for(int i=1;i<fi;i++){
        for(int k=0; k<fi-1; k++){
        for(int j=fi-1;j>0;j--){
           if(*(A+(i*fi)+j)>*(A+(i*fi)+j-1))
           {
          aux=*(A+(i*fi)+j);
          *(A+(i*fi)+j)=*(A+(i*fi)+j-1);
          *(A+(i*fi)+j-1)=aux;
           }
        }
        }
    i++;
    }
    //Completar
}

// No modificar desde aqui
void leerElementos(int *A,int fi){
    
    for(int i=0;i<fi;i++){
        for(int j=0;j<fi;j++){
           cin>>*(A+(i*fi)+j);
        }
    }
}
// No modificar 
void mostrarElementos(int* A,int fi){
    for(int i=0;i<fi;i++){
        cout<<endl;
        for(int j=0;j<fi;j++){
            cout<<*(A+(i*fi)+j)<<" ";
        }
    }
}
// No modificar 
int main()
{
    int n;
    cin>>n;
    int matriz[n][n];
    leerElementos(matriz[0],n);
    ordenamientoEscalera(matriz[0],n);
    cout<<endl;
    mostrarElementos(matriz[0],n);
    return 0;
}
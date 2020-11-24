#include <iostream>
#include<math.h>
using namespace std;
int checkArmstrong(int n1);
int checkPerfect(int n1);
 int main()
{int n=1,accuArm=0,accuPerfect=0;
  	while(n>0 &&n<=1000){
	  cin>>n;
	  if(checkArmstrong(n)==1)
	 {accuArm++;}
	 if(checkPerfect(n)==1)
	 {accuPerfect++;}
  	}
    cout<<accuArm<<endl;
    cout<<accuPerfect;
 return 0;
}
    int checkArmstrong(int n1)
    {int u,n2,o=0,c=0;
        n2=n1;
        while(n2>0)
        {n2=n2/10;c++;}
        n2=n1;
        do{u=n2%10;n2=n2/10;o=o+pow(u,c);
        }while(n2!=0);
        if(o==n1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int checkPerfect(int n1)
    {   int s1=0,aux;
        aux=n1;
        for(int i=1; i<=aux/2;i++)
        {
            if(aux%i==0)
            {
                s1=s1+i;
            }
        }
        if(s1==aux)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
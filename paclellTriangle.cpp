#include<iostream>
using namespace std;


int fact(int n){
    int p=1;
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            p=p*i;

        }
         return p;
    }

}

int main()
{
    int i,j,n;
    cin>>n;
    int a=0,b;
     for(i=1;i<=n;i++)
     {
        b=0;
         for(j=1;j<=n-i;j++)
         {
             cout<<" ";
         }

           for(j=1;j<=i;j++)
           {
              cout<<(fact(a))/(fact(b)*fact(a-b))<<" ";


              b++;
           }
            a++;
        cout<<endl;
     }
}

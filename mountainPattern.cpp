#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
       for(int i=1;i<=n;i++)
        {
            a=1;
        if (i<n)
        {
          for(int j=1;j<=i;j++)
           {
             cout <<a<<" ";
             a++;
           }
         for(int j=1;j<=(2*(n-i))-1;j++)
         {
             cout<<"  ";
         }
          for(int j=1;j<=i;j++)
            {
                cout<<a-1<<" ";
                a--;

            }
              a-- ;
         cout<<endl;
        }
        else{
            for(int j=1;j<=n;j++)
            {
                cout<<a<<" ";
                a++;
            }
            for(int j=n+1;j<=2*n-1;j++)
            {
                cout<<a-2<<" ";
                a--;
            }
        }
        }
         return 0;
}

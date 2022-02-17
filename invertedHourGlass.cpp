#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
       for(int i=1;i<=(2*n)+1;i++)
        {
            a=n;
        if (i<=n)
        {
          for(int j=1;j<=i;j++)
           {
             cout <<a<<" ";
             a--;
           }
         for(int j=1;j<=(2*(n-i))+1;j++)
         {
             cout<<"  ";
         }
          for(int j=1;j<=i;j++)
            {
                cout<<a+1<<" ";
                a++;

            }
              a-- ;
         cout<<endl;

        }

          else if(i==(n+1))
           {
               for(int j=1;j<=n;j++)
            {
              cout<<a<<" ";
              a--;
            }
          cout<<"0 ";
           for(int j=1;j<=n;j++)
            {
              cout<<a+1<<" ";
              a++;
             }
             cout<<endl;
          }
          else
          {
             for(int j=1;j<=2*n-i+2;j++)
             {
                 cout<<a<<" ";
                 a--;
             }
            for(int j=1;j<=2*(i-n)-3;j++)
             {
               cout<<"  ";
             }
             for(int j=1;j<=2*n-i+2;j++)
            {
                cout<<a+1<<" ";
                a++;

            }
              a-- ;


             cout<<endl;
          }
    }
return 0;
}

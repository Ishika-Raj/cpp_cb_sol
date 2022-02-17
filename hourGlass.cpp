
#include <iostream>
using namespace std;
int main()
{
    int n,a;

    cin>>n;

    for(int i=1;i<=(2*n)+1;i++)
     {
         a=5;
        for(int j=1;j<=i-1;j++)
            {
                 cout<<"  ";
            }

        for(int j=1;j<=(2*n)+1;j++)
            {
              if(j<=n+1)
               {
                 cout<<a--<<
                 "  ";

               }


            }
            a=a-1;
            cout<<endl;

     }
        return 0;
}



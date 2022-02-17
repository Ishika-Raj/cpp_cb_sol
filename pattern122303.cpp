#include<iostream>
using namespace std;
int main()
{
    int n,a=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                cout<<a<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
         a++;
        cout<<endl;
    }
}

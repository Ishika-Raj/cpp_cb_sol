#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int output[N];
    for(int i=0;i<N;i++)
    {
        int pro=1;

       for(int j=0;j<N;j++)
      {
         if(j==i)
        {

        }
        else
        {
             pro=pro*arr[j];

        }
       }
        output[i]=pro;
         cout<<output[i]<<" ";
    }
return 0;
}

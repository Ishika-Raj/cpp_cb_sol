#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int a= INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]>a)
       {
           a=arr[i];

       }

    }
    cout<<a;

    return 0;
}

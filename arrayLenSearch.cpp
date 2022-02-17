#include<iostream>
using namespace std;
int index(int arr[],int n, int m)
{
    bool b=false;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
           return i;
           bool b= true;
           break;
        }

    }
    if (b== false)
    {
        return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int m;
    cin>>m;
  cout<<index(a,n,m);

	return 0;
}

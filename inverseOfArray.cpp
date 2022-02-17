#include<iostream>
using namespace std;
void Inverse(int *a,int*b , int indx, int n)
{
    //base case
    if(indx==n)
    {
        return;
    }
    //recursive
    int val=a[indx];
    b[val]=indx;
    Inverse(a,b,indx+1,n);
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    Inverse(a,b,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;

}

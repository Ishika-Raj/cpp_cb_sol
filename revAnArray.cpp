#include<iostream>
using namespace std;
int main() {
	int n ;
	cin>>n;
	int arr[n],j;
	j=n-1;
   for(int i=0;i<n;i++)
  {
	 cin>>arr[i];
  }

    for(int i=0;i<n;i++)
    {
	   if(i<=j)
       {
        swap(arr[i],arr[j]);
        j--;
	   }
   }



  for(int i=0;i<n;i++)
  {
	 cout<<arr[i]<<endl;
  }
	return 0;
}


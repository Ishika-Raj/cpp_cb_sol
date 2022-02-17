#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
  for(int i=0;i<n;i++)
  {
       int sum=0;
      for(int j=i+1;j<n;j++)
      {
          sum=arr[i]+arr[j];
          if(sum==target)
          {
              cout<<arr[i]<<" and "<<arr[j];

          }

      }
  }
  return 0;
}

#include<iostream>
using namespace std;
int main() {
	int n ,arr[n],j;
	cin>>n;
	j=n-1;
   for(int i=0;i<n;i++){
	 cin>>arr[i];
  }
   for(int i=0;i<n;i++){

	 swap(arr[i],arr[j]);
	 j--;

  }


 for(int i=0;i<n;i++){
	 cout<<arr[i];
 }
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
     cin>>n;
    int a[n],target,sum;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>target;
    for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j+1]<a[j]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" " ;

    }
    cout<<endl;
	for(int i=0;i<n;i++)
    {
		int l=i+1;
		int r=n-1;
		while(l<r){
			if(a[l]+a[r]+a[i]==target){
				cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
				l++;
				r--;
			}
			else if(a[l]+a[r]+a[i]<target)
				l++;
			else
				r--;
		}
	}
	return 0;

}

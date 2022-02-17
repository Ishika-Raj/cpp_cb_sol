#include<iostream>
using namespace std;
int main() {
	int n,rem;
	cin>>n;
	int rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev+(rem*10);
		n=n/10;
	}
	cout<<rev;
	return 0;
}

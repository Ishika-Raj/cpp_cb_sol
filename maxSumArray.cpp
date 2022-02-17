#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
    int n,m;
	cin>>n>>m;
	int a[100],b[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int sum=0,j=0,k=0;
	int sa=0,sb=0;
        while(j<n&&k<m)
        {
            if(a[j]>b[k])
            {
                sb+=b[k];
                k++;
            }
            else if(b[k]>a[j])
            {
                sa+=a[j];
                j++;
            }
            else
            {
                if(sa>sb)
                {
                    sum+=sa;
                }
                else
                {
                    sum+=sb;
                }
                sum+=a[j];
                sa=sb=0;
                j++;
                k++;
            }

        }
        while(j<n)
        {
            sa+=a[j];
            j++;
        }
        while(k<m)
        {
            sb+=a[k];
            k++;
        }
        if(sa>sb)
        {
            sum+=sa;
        }
        else
        {
            sum+=sb;
        }

		cout<<sum;
	}

	return 0;
}

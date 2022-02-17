#include <iostream>
using namespace std;

int main() {
    int target,sum=0;
    cin>>target;

	int nums[]={1,2,3,4,5};
	int n=sizeof(nums)/sizeof(int);
    for(int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
      {
          sum=0;
            for (int k = i; k <= j; k++)
            {
                cout<<nums[k]<<" ";
                 sum=sum+nums[k];
            }

             cout<<"sum = "<<sum;
             cout<<endl;
      }
   }

	return 0;
}

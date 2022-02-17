#include<iostream>
using namespace std;

int main(){
 int i,j,n,c;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n-i+1;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" %d ",c);
            c=(c*(i-j)/(j+1));
        }
        printf("\n");
    }
    return 0;
}

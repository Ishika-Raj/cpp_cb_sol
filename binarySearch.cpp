#include <iostream>
  using namespace std;
  int search(int A[], int n, int target) {
        int left = 0;
        int right = n-1;
        int middle = 0;
        while(left<=right){
            middle = left+(right-left)/2;
            if(A[middle]==target)
                return middle;
            if(A[middle]>=A[left]){
                if(A[left]<=target&&target<A[middle]){
                    right = middle-1;
                }
                else
                    left = middle+1;
            }
            else{
                if(A[middle]<target&&target<=A[right]){
                    left = middle+1;
                }
                else
                    right = middle-1;
            }
        }
        return -1;
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
      int M;
      cin>>M;
    cout<<search(a,n, M);

      return 0;
    }

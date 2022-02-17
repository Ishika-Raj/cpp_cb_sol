#include <iostream>
  using namespace std;
  int main()
  {
      int n;
      cin>>n;
      for(int i=1;i<=2*n-1;i++)
      {
          if(i<=n-1)
          {
            for(int j=1;j<=n-i;j++)
            {
              cout<<'\t';

            }
            for(int j=1;j<=(2*(i-1))+1;j++)
            {
              cout<<"*"<<'\t';
            }
            cout<<endl;

          }

          else if(i==n)

          {
               for(int j=1;j<=2*n-1;j++)
               {

                    cout<<"*"<<'\t';
               }
               cout<<endl;
          }

           else
        {

            for(int j=1;j<=i-((n/2)+1);j++)
            {
              cout<<'\t';

            }
             for(int j=1;j<=2*(n-i)+1;j++)
            {
              cout<<"*"<<'\t';

            }

            cout<<endl;

          }


      }
      return 0;
  }

#include <iostream>
  using namespace std;
  int main()
  {
      int n;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
          if(i<=n/2)
          {
            for(int j=1;j<=(n/2)+1-i;j++)
            {
              cout<<'\t';

            }
            for(int j=1;j<=(2*(i-1))+1;j++)
            {
              cout<<"*"<<'\t';
            }
            cout<<endl;

          }

          else if(i==(n+1)/2)

          {
               for(int j=1;j<=n;j++)
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


#include <iostream>
using namespace std;

int main() {

	int n,a=5;

	cin >> n;

	for (int row = 1; row <= 2*n-1; ++row)
	{
		if (row == 1 || row == n*2-1)
        {
			// Print n times star
			for (int i = 0; i < 2*n-1; ++i)
			{
				cout << '*';
			}
		}
        else if(row<=n)
        {
			for (int i = 1 ;i <= (n- row+1) ;i++)
			{
				cout << "*";
			}

			for (int i = 1; i <= 2 * row - 3; ++i)
			{
				cout << " ";
			}
			for (int i = 1 ; i <= (n- row+1) ;i++) {
				cout << "*";
			}


        }
        else
        {
          for (int i = 1 ; i <= (row-n+1) ;i++)

          {
              cout<<"*";
          }

          for (int i = 2*(2*n-row)-3; i >=1;i--)
          {
				cout << " ";


          }
          for (int i = 1 ; i <= (row-n+1) ;i++)

          {
              cout<<"*";
          }



        }


			cout<<endl;

	}



	return 0;
}

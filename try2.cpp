#include<iostream>
using namespace std;
void a(int x)
{
    try
    {
          if(x==1)  
          {
            throw x;
          }
    }
    catch(int)
    {
        cout<<"Catch  in function "<<endl;
        throw; //rethrow
    }
    
    
}
int main()
{
    int x=1;
    a(x);
    return 0;
}

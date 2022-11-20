#include<iostream>
using namespace std;

class a
{
    public:
    static int c;
    a()
    {
        c++;
        cnt();
    }
    void cnt()
    {
        cout<<"Total obj : "<<c;
    }
};
int a :: c=0;
int main()
{
   a d;
   return 0;
}
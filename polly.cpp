#include<iostream>
using namespace std;
 
class P
{
   
   
    public:
        void f(int i)
        {
            cout<<i<<" i of Parent class"<<endl;
        }
};
 
class Q: public P
{
   
    public:
    void f(int i)
    {
        cout<<2*i<<" i of child class"<<endl;
    }
};
 
int main()
{
    int i=1;
    //TYPE 1: parent ka obj bna k parent ko new addres dena
    P *T1= new P;
    (*T1).f(1);

    // TYPE 2: parent ka obj bna k child ko new addres dena
    P *T2= new Q();
    T2->f(1);

    // TYPE 3: child ka obj bna k child ko new addres dena
    Q *T3= new Q();
     (*T3).f(1);

    // TYPE 4: child ka obj bna k parent ko new addres dena
   // Q *T4= new P();
   // (*T4).f(1);

 
  // Q *y= new Q();
  // ((Q *)y)->f(1); 
    return 0;
}

#include<iostream>
using namespace std;
class A
{
private:
int real, imaginary;
   
public:
A(int rel=0, int img=0)
{
    real=rel;
    imaginary=img;
}
  A operator+( A &obj) 
  {
    A result;
    result.real=real+ obj.real;
    result.imaginary= imaginary+obj.imaginary;
    return result;
  }
  void print()
  {
    cout<<real<<" + "<<imaginary<<"i";
  }
};


int main()
{
    A c1(5,3), c2(7,4);
    A c3 = c1+c2;
    c3.print();

    return 0;
}
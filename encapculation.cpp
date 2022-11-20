#include<iostream>
using namespace std;
class CR
{
	private:
		// data hidden from outside world
		int x;
		
	public:
		// function to set value of
		// variable x
		void set(int a)
		{
			x =a;
		}
		
		// function to return value of
		// variable x
		int get()
		{
			return x;
		}
};

// main function
int main()
{
	CR ishika;
	
	ishika.set(5);
	
	cout<<ishika.get();
	return 0;
}
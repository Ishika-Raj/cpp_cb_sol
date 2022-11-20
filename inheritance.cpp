#include <bits/stdc++.h>
using namespace std;
// Base class
class Parent {
public:
	int parent_id;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent {
public:
	int child_id;
};

// main function
int main()
{
	Child obj1;

	// An object of class child has all data members
	// and member functions of class parent
	obj1.parent_id = 7;
	obj1.child_id = 91;
	cout << "Child id is: " << obj1.child_id<< '\n';
	cout << "Parent id is: " << obj1.parent_id << '\n';
	return 0;
}
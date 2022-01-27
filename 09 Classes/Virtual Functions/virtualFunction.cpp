#include<iostream>
using namespace std;
class base {
public:
	virtual void print()
	{
		cout << "Print Base Class\n";
	}

	void show()
	{
		cout << "Show Base Class\n";
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "Print Derived Class\n";
	}

	void show()
	{
		cout << "Show Derived Class\n";
	}
};

int main() {
	base *bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}

#include <iostream>
using namespace std;
class item {
	private: 
		// class member variables
		int number;
		float cost;
	public:
		void getdata(int number, float cost); // declaration
		// definition inside the class
		// function to print number and cost values
		void putdata() {
			cout << "number : " << number << endl;
			cout << "cost : " << cost << endl;
		}
};

// definition outside the class
// function to get number and cost values
void item::getdata(int number, float cost) {
	item::number = number;
	item::cost = cost;
}

int main() {
	item x;
	cout << "\nObject x" << endl;
	//calling getdata() and putdata() functions using object x
	x.getdata(100, 399.99);
	x.putdata();

	item y;
	cout << "\nObject y" << endl;
	//calling getdata() and putdata() functions using object y
	y.getdata(250, 175.49);
	y.putdata();
	return 0;
}
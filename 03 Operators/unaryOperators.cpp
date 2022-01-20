#include <iostream>
using namespace std;
int main() {
	int num = 10;
    cout << "Unary (+) Opeartor: " <<  +num << endl; //  10
	cout << "Unary (-) Opeartor: " <<  -num << endl; // -10
	cout << "Increment Opeartor: " << ++num << endl; //  ++10 => now num stores 11
	cout << "Decrement Opeartor: " << --num << endl; //  --11 => 10
	return 0;
}
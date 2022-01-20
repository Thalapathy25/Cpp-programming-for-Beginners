#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter the Value of Number: ";
	cin >> num;
    cout << "Bitwise Complement: "<< (~ num) << endl;
	cout << "Left Shift Opeartor: "<< (num << 2) << endl;
	cout << "Right Shift Opeartor: "<< (num >> 2) << endl;
	cout << "Bitwise AND: "<< (num & 2) << endl;
	cout << "Bitwise OR: "<< (num | 2) << endl;
	return 0;
}
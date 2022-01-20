#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	cout << "Enter the Value of Number 1 : ";
	cin >> num1;
	cout << "Enter the Value of Number 2 : ";
	cin >> num2;
	cout << "Greater than or Equal to : " << (num1 >= num2) << endl;
	cout << "Lesser than or Equal to : " << (num1 <= num2) << endl;
	cout << "Not equals to : " << (num1 != num2) << endl;
	cout << "Greater than : " << (num1 > num2) << endl;
	cout << "Lesser than : " << (num1 < num2) << endl;
	cout << "Equals to : " << (num1 == num2) << endl;
	return 0;
}
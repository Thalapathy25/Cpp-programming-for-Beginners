#include <iostream>
using namespace std;
int main() {
	int i = 1, num;
	cout << "Enter the Number : ";
	cin >> num;
	long factorial = 1;
    while(i <= num){
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}
#include <iostream>
using namespace std;
long int addNumbers(int num);
int main() {
    int number;
    cout << "Enter the Number : ";
    cin >> number;
    cout << "Sum of the numbers are " << addNumbers(number) << endl;
    return 0;
}

long int addNumbers(int num) {
    if (num > 0)
        return num + addNumbers(num - 1);
    else
        return num;
}
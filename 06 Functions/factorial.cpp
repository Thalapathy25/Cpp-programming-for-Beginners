#include <iostream>
using namespace std;
long int factorial(int number);
int main() {
    int number;
    cout << "Enter a positive number : ";
    cin >> number;
    cout << "Factorial of " << number << " = " << factorial(number) << endl;
    return 0;
}

long int factorial(int number) {
    if (number >= 1)
        return number * factorial(number - 1);
    else
        return 1;
}

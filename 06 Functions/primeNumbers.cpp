#include <iostream>
#include <cmath>
using namespace std;
int checkPrimeNumber(int number);
int main() {
    int num1, num2, i, flag;
    cout << "Enter the number 1 : ";
    cin >> num1;
    cout << "Enter the number 2 : ";
    cin >> num2;
    cout << "Prime numbers between " << num1 << " and " << num2 << " are: ";
    for (i = num1 + 1; i < num2; ++i) {
        flag = checkPrimeNumber(i);
        if (flag == 1)
            cout << i << ", ";
    }
    cout << endl;
    return 0;
}

int checkPrimeNumber(int number) {
    int j, flag = 1;
    for (j = 2; j <= sqrt(number); ++j) {
        if (number % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

#include <iostream>
using namespace std;

typedef struct complex {
    float real;
    float imag;
} complexNumber;

complexNumber addComplexNumbers(complex, complex);

int main() {
    complexNumber num1, num2, complexSum;
    char signOfImag;

    cout << "For 1st complex number : " << endl;
    cout << "Enter real value : ";
    cin >> num1.real;
    cout << "Enter imaginary value : ";
    cin >> num1.imag;

    cout << endl << "For 2nd complex number : " << endl;
    cout << "Enter real value : ";
    cin >> num2.real;
    cout << "Enter imaginary value : ";
    cin >> num2.imag;
    
    // Call add function and store result in complexSum
    complexSum = addComplexNumbers(num1, num2);

    // Use Ternary Operator to check the sign of the imaginary number
    signOfImag = (complexSum.imag > 0) ? '+' : '-';

    // Use Ternary Operator to adjust the sign of the imaginary number
    complexSum.imag = (complexSum.imag > 0) ? complexSum.imag : -complexSum.imag;

    cout << endl << "Sum = " << complexSum.real << " " << signOfImag << " " << complexSum.imag << "i" << endl;

    return 0;
}

complexNumber addComplexNumbers(complex num1, complex num2) {
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return (temp);
}

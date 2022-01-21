#include <iostream>
using namespace std;
int main() {
	int num1, num2, num3, largest;
	cout << "Enter the number 1 : ";
	scanf("%d", &num1);
	cout << "Enter the number 2 : ";
	scanf("%d", &num2);
	cout << "Enter the number 3 : ";
	scanf("%d", &num3);
	if (num1 >= num2) 
    {
      if (num1 >= num3) 
        largest = num1;
      else 
        largest = num3;
    } 
    else 
    {
      if (num2 >= num3) 
        largest = num2;
      else 
        largest = num3;
    }
    cout << "Largest Number : " << largest << endl; 
	return 0;
}
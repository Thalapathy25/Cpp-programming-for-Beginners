#include <iostream>
#include <cmath>
using namespace std;
int checkArmstrongNumber(int num);
int main() {
   int number, flag;
   cout << "Enter a number : ";
   cin >> number;
   flag = checkArmstrongNumber(number);
   if (flag == 1)
      cout << number << " is a Armstrong number." << endl;
   else
      cout << number << " is not a Armstrong number." << endl;
   return 0;
}


int checkArmstrongNumber(int num) {
   int originalNum, remainder, n = 0, flag;
   double result = 0.0;
   
   for (originalNum = num; originalNum != 0; ++n) {
      originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
      remainder = originalNum % 10;
      result += pow(remainder, n);
   }

   if (round(result) == num)
      flag = 1;
   else
      flag = 0;
   return flag;
}
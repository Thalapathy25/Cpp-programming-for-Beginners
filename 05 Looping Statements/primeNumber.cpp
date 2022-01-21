#include <iostream>
using namespace std;
int main() {
  int i = 2, num;
  bool flag = false;
  cout << "Enter the Number : ";
  cin >> num;
  while (i <= num / 2) {
    // condition for nonprime number
    if (num % i == 0) {
      flag = true;
      break;
    }
    ++i;
  }

  if (!flag)
    cout << num << " is a prime number." << endl;
  else
    cout << num << " is not a prime number." << endl;
  return 0;
}
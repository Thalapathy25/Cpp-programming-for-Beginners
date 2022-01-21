#include <iostream>
using namespace std;
int main(){
  int firstTerm = 0, secondTerm = 1, number;
  cout << "Enter the Number : ";
  cin >> number;
  cout << "Fibonacci Series till " << number << " terms : ";
  for (int i = 1; i <= number; ++i) {
    cout << firstTerm << endl;
    int nextTerm = firstTerm + secondTerm;
    firstTerm = secondTerm;
    secondTerm = nextTerm;
	}
	return 0;
}
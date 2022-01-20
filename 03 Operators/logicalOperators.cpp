#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter the number: ";
	cin >> num;
    cout << "AND operation : " << ((num > 0) && (num != 0)) << endl;
	cout << "OR  operation : " << ((num > 0) || (num != 0)) << endl;
	cout << "NOT operation : " << (num > 0) << endl;
	return 0;
}
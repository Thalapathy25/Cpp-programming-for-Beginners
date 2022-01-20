#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter the Number : ";
	cin >> num;
	printf("The Given Number %d is a %s\n", num,
		   (num % 2 == 0) ? "Even Number" : "Odd Number");
	return 0;
}
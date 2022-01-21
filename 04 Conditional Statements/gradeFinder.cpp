#include <iostream>
using namespace std;
int main() {
	int mark;
	cout << "Enter the Mark : ";
	cin >> mark;
	if(mark < 50 && mark > 0)
	    cout << "Fail";
	else if(mark >= 50 && mark < 60)  
	    cout << "D grade";  
	else if(mark >= 60 && mark < 70) 
	    cout << "C grade";    
	else if(mark >= 70 && mark < 80)  
	    cout << "B grade";  
	else if(mark >= 80 && mark < 90) 
	    cout << "A grade";  
	else if(mark >= 90 && mark < 100)  
	    cout << "A+ grade";  
	else  
	    cout << "Please,Enter a Mark between 0 to 100!";
	return 0;
}
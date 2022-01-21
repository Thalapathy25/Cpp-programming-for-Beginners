#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "Enter the Character : ";
	cin >> ch;
	switch(ch) {  
		case 'a':   
	    case 'e':    
	    case 'i':   
	    case 'o':   
	    case 'u':   
	    case 'A':    
	    case 'E':    
	    case 'I':   
	    case 'O':     
	    case 'U':   
	        cout << ch << " is a Vowel";
	        break;  
	    default:   
	        cout << ch << " is not a Vowel";
	}
	return 0;
}
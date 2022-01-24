#include <iostream>  
#include <exception>  
using namespace std;  

class zeroDivideException : public exception {  
    public:  
        const char * error() const throw()  
        {  
            return "Attempted to divide by zero!\n"; 
        }  
};  

int main() {  
    try  
    {  
        float num1, num2;
        cout << "Enter the Number 1 : ";
        cin >> num1;
        cout << "Enter the Number 2 : ";
        cin >> num2; 
        if (num2 == 0) {  
            zeroDivideException err;  
            throw err;  
        }  
        else    
            cout << num1 / num2 << endl;
    }  
    catch(zeroDivideException& e) {  
        cout << e.error();  
    }  
    return 0;
}  
## C++ Exception Handling
- Exception Handling in C++ is a process to handle runtime errors. We perform exception handling so the normal flow of the application can be maintained even after runtime errors.
- In C++, exception is an event or object which is thrown at runtime. All exceptions are derived from `std::exception` class. It is a runtime error which can be handled. If we don't handle the exception, it prints exception message and terminates the program.

### Advantage
- It maintains the normal flow of the application. In such case, rest of the code is executed even after exception.

### Exception Handling Keywords
In C++, we use 3 keywords to perform exception handling:
1. try
2. catch
3. throw

### C++ try/catch
In C++ programming, exception handling is performed using `try/catch` statement. 
The C++ `try` block is used to place the code that may occur exception. The `catch` block is used to handle the exception.

**Example**
```cpp
#include <iostream>  
using namespace std;  
float division(float x, float y) {  
   if(y == 0)
      throw "Attempted to divide by zero!";  
   return (x / y);  
}  

int main () {  
   float num1, num2;
   cout << "Enter the Number 1 : ";
   cin >> num1;
   cout << "Enter the Number 2 : ";
   cin >> num2; 
   float result = 0;  
   try {  
      result = division(num1, num2);  
      cout << result << endl;  
   }catch (const char* error) {  
      cerr << error << endl;  
   }  
   return 0;  
}  
```

### C++ User-Defined Exceptions
The new exception can be defined by overriding and inheriting `exception` class functionality.
**Example**
```cpp
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
```

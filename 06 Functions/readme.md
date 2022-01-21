## C++ functions :- 
- C++ provides some pre-defined functions, such as main(), which is used to execute code. 
- But you can also create your own functions to perform certain actions.
- To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ().

### Declaration of a function
```cpp
return_type function_name(data_type parameter...)  
{    
  //code to be executed    
}  
```

### Call by Value :- 
- In call by value, original value is not modified.
- In call by value, value being passed to the function is locally stored by the function parameter in stack memory location. 
- If you change the value of function parameter, it is changed for the current function only. 
- It will not change the value of variable inside the caller method such as main().

**Example**
```cpp
#include <iostream>  
using namespace std;  
void change(int data);  
int main()  
{  
  int data = 3;  
  change(data); // passing the value of the variable data
  cout << "Value of the data is: " << data<< endl;  
  return 0;  
}  
void change(int data)  
{  
  data = 5; //don't change original value
}  
```

### Call by Referance :- 
- In call by reference, original value is modified because we pass reference (address).
- Here, address of the value is passed in the function, so actual and formal arguments share the same address space. 
- Hence, value changed inside the function, is reflected inside as well as outside the function.

**Example**
```cpp
#include <iostream>  
using namespace std;  
void change(int data);  
int main()  
{  
  int data = 3;  
  change(&data); // passing memory address of the variable data  
  cout << "Value of the data is: " << data<< endl;  
  return 0;  
}  
void change(int *data)  
{  
  *data = 5; // changing original value from the memory address 
}  
```

### Difference between call by value and call by reference in C++ :- 
|No.|	Call by value                                                            |	Call by reference                                                       |
|---|--------------------------------------------------------------------------|--------------------------------------------------------------------------|
|1	| A copy of value is passed to the function                                |	An address of value is passed to the function                           |
|2	| Changes made inside the function is not reflected on other functions     |	Changes made inside the function is reflected outside the function also |
|3  |	Actual and formal arguments will be created in different memory location |	Actual and formal arguments will be created in same memory location     |

### Recursion :- 
The function which calls the same function, is known as  recursive  function.

**Example**
```cpp
#include <iostream>
using namespace std;
long int factorial(int number);
int main() {
    int number;
    cout << "Enter a positive number : ";
    cin >> number;
    cout << "Factorial of " << number << " = " << factorial(number) << endl;
    return 0;
}

long int factorial(int number) {
    if (number >= 1)
        return number * factorial(number - 1);
    else
        return 1;
}
```

## C++ Strings

In C++, `string` is an object of `std::string` class that represents sequence of characters. We can perform many operations on strings such as concatenation, comparison, conversion etc.

**Example**
```cpp
#include <iostream>
using namespace std;
int main() {
    string s1, s2, result;
    cout << "Enter the string 1: ";
    getline (cin, s1);
    cout << "Enter the string 2: ";
    getline (cin, s2);
    result = s1 + s2;
    cout << endl << "Concatenated String = "<< result << endl;
    return 0;
}
```

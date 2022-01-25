## C++ Namespaces
- **Namespaces** in C++ are used to organize too many classes so that it can be easy to handle the application.
- For accessing the class of a namespace, we need to use `namespacename::classname`. 
- We can use `using` keyword so that we don't have to use complete name all the time.
- In C++, `global` namespace is the root namespace. The `global::std` will always refer to the namespace `std` of C++ Framework.

**Example**
```cpp
#include <iostream>  
using namespace std;  
namespace first {    
    float calculate(float x, float y) {   
        cout << "Addition : " << x + y << endl;          
    }    
}    
namespace second {    
    float calculate(float x, float y) {   
        cout << "Subtraction : " << x - y << endl;   
    }    
}   
int main() {  
    first::calculate(20.2325, 10.1125);  
    second::calculate(20.2325, 10.1125);
    return 0;  
}  
```
**By using Keyword**
```cpp
#include <iostream>  
using namespace std;  
namespace first {    
   float calculate(float x, float y) {   
      cout << "Addition : " << x + y << endl;          
   }    
}    
namespace second {    
   float calculate(float x, float y) {   
      cout << "Subtraction : " << x - y << endl;   
   }    
}   

using namespace first;  
int main () {  
   calculate(20.2325, 10.1125); 
   return 0; 
}
```

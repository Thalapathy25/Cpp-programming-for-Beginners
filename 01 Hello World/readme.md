## "Hello World!" Program
```cpp
#include <iostream>
```
- The `#include` is a preprocessor directive used to include files in our program. The above code is including the contents of the iostream file.
- This allows us to use cout in our program to print output on the screen.
- For now, just remember that we need to use `#include <iostream>` to use `cout` that allows us to print output on the screen.
  
```cpp
using namespace std;
```
- The `using namespace` statement just means that in the scope it is present, make
  all the things under the std namespace available without having to prefix `std::` before each of them.

```cpp
int main() {...}
```
- A valid C++ program must have the `main()` function. 
- The curly braces indicate the start and the end of the function.
- The execution of code beings from this function.

```cpp
cout << "Hello World !" << endl;
```
- `cout` prints the content inside the quotation marks. 
- It must be followed by `<<` followed by the format string. 
- In our example, "Hello World!" is the format string.
- `endl` is used to insert a new line break equivalent to `\n`.
- ; is used to indicate the end of a statement.

```cpp
return 0;
```
- The `return 0;` statement is the "Exit status" of the program.

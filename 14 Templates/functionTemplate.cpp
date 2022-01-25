#include <iostream>  
using namespace std;  
template <class X, class Y> void fun(X num1, Y num2) {  
   cout << "Addition of " << num1 << " and " << num2 << " : " << num1 + num2 << endl;  
}  
  
int main() {  
   fun(11.250, 12.325);
   return 0;  
}  
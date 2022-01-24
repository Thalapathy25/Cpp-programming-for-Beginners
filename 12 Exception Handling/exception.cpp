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
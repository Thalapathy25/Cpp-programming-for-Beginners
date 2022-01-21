#include <iostream>
using namespace std;
int checkPalidrome(int num);
int main()    
{    
  int num;  
  cout << "Enter the Number : ";    
  cin >> num;
  if(checkPalidrome(num))    
    cout << num << " is Palindrome number" << endl;    
  else    
    cout << num << " is Not Palindrome number" << endl;   
  return 0;  
}   

int checkPalidrome(int num) {
  int rem, temp, sum=0;  
  temp = num;
  while(num > 0)    
  {    
    rem = num % 10;    
    sum = (sum * 10) + rem;    
    num = num / 10;    
  }    
  if(temp == sum)    
    return true;
  else    
    return false;
}
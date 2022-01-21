#include <iostream>
using namespace std;
int main()    
{    
  int num, rem, sum=0, temp;    
  cout << "Enter the Number : ";    
  cin >> num;    
  temp = num;    
  while(num > 0)    
  {    
    rem = num % 10;    
    sum = (sum * 10) + rem;    
    num = num / 10;    
  }    
  if(temp==sum)    
    cout << temp << " is Palindrome number" << endl;    
  else    
    cout << temp << " is Not Palindrome number" << endl;   
  return 0;  
}   
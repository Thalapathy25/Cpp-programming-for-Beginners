#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("sample.txt");  
  if (filestream.is_open()) {  
    filestream << "Hello World !\n";  
    filestream.close();  
  }  
  else 
    cout <<"File opening is failed.";  
  return 0;  
}  
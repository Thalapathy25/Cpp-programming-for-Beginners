#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ofstream fileout;
    ifstream filein;
    filein.open("sample.txt");
    fileout.open ("sample.txt",ios::app); // Append mode
    if(filein.is_open())
        fileout<< "\nAppending to a file\n";
    cout << "Successfull !" << endl;
    filein.close();
    fileout.close();
    return 0;
}
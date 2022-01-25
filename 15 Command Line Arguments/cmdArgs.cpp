#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int counter;
    cout << endl << "Program name is: " << argv[0];
    if(argc == 1)
        cout << endl << "No Extra Command Line Argument" << endl;
    if(argc>=2)
    {
        cout << endl << "Number Of Arguments Passed: " << argc;
        cout << endl << "----Following Are The Command Line Arguments Passed----" << endl;
        for(counter = 0; counter < argc; counter++)
            cout << "argv[" << counter << "]: " << argv[counter] << endl;
    }
    return 0;
}
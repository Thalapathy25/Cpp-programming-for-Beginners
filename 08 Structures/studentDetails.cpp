#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int roll;
    float marks;
};

int main() 
{
    student st;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    getline (cin, st.name);
    cout << "Enter roll number: ";
    cin >> st.roll;
    cout << "Enter marks: ";
    cin >> st.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << st.name << endl;
    cout << "Roll: " << st.roll << endl;
    cout << "Marks: " << st.marks << endl;
    return 0;
}
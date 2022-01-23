#include <iostream>
#include <string>
using namespace std;
class binary {
	private:
		string s;
	public:
		// function to get binary number to check
		void getdata() {
			cout << "Enter a binary number : ";
			cin >> s;
		}

		// function to check the given number is valid binary number or not
		void checkbinary() {
			for (int i = 0; i < s.length(); i++)
			{
				// checks whether the given number has any other numbers except 0's & 1's
				// if yes then the given number is not a valid binary number
				// then return the control to ones()...
				if (s.at(i) != '0' && s.at(i) != '1')
				{
					cout << "\nIncorrect binary number.." << endl;
					exit(0);
				}
			}
		}

		void ones() {
			checkbinary(); // calls checkbinary()
			/*
			 after the finding the given number is valid
			 Then convert the 0's to 1's and 1's to 0's 
			 using for loop and if else statements
			*/
			for (int i = 0; i < s.length(); i++)
			{
				if (s.at(i) == '0')
					s.at(i) = '1';
				else
					s.at(i) = '0';
			}
			// return control to display()
		}

		void display() {
			ones(); // calls the ones()
			cout << "\nThe 1's compliment of the given binary number is : " << s << endl;
		}
};

int main() {
	binary b;
	//calling getdata() and display() functions using object b
	b.getdata();
	b.display();
	return 0;
}
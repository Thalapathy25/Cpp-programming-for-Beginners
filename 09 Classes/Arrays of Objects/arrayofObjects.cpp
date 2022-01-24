#include <iostream>
using namespace std;
class employee {
	char name[30];
	float age;
public:
	void getdata();
	void putdata();
};

void employee::getdata() {
	cout << "Enter the name : ";
	cin >> name;
	cout << "Enter the age : ";
	cin >> age;
}

void employee::putdata() {
	cout << "Name : " << name << endl;
	cout << "Age  : " << age << endl;
}

int main() {
	int size;
	cout << "Enter the no of elements to insert : ";
	cin >> size;
	employee emp[size];
	for (int i = 0; i < size; ++i) {
		cout << "\nDetails of Employee " << i + 1 << endl;
		emp[i].getdata(); //accessing getdata() from each object in the array
	}
	cout << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << "\nEmployee " << i + 1 << endl;
		emp[i].putdata(); //accessing putdata() from each object in the array
	}
	return 0;
}
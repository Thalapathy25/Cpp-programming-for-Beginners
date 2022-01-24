#include <iostream>
using namespace std;
const m = 50;
class Items
{
	private:
		int itemCode[m];
		float itemPrice[m];
	public:
		void counter() {
			count = 0;
		}

		void getItem() {
			cout << "Enter the item code : ";
			cin >> itemCode[count];
			cout << "Enter the item price : ";
			cin >> itemPrice[count];
			count++;
		}
		
		void displaySum() {
			float sum = 0.0;
			for (int i = 0; i < count; ++i)
			{
				sum = sum + itemPrice[i]
			}
			cout << "\nTotal Cost : " << sum << endl;
		}

		void removeItem() {
			int id;
			cout << "Enter the item code : ";
			cin >> id;
			for (int i = 0; i < count; ++i)
				if (itemCode[i] == id)
					itemPrice = 0;
		}

		void displayItems() {
			cout << "\nCode Price";
			for (int i = 0; i < count; ++i)
			{
				cout << endl << itemCode[i];
				cout << " " << itemPrice[i];
			}
			cout << endl;
		}
};

int main() {
	Items order;
	order.counter();
	int x;
	do {
		cout << "1. Add an item " << endl;
		cout << "2. Display total cost " << endl;
		cout << "3. Delete an item " << endl;
		cout << "4. Display all items " << endl;
		cout << "5. Quit " << endl;
		cout << "Enter the Option : ";
		cin >> x;
		switch(x) {
			case 1 : 
				order.getItem();
				break;
			case 2 : 
				order.displaySum();
				break;
			case 3 : 
				order.removeItem();
				break;
			case 4 :
				order.displayItems();
				break
			case 5 :
				break;
			default :
				cout << "Invalid Option" << endl;
		}
	} while(x != 5);
	return 0;
}
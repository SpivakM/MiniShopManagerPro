#include "buy_item.h"

void buy_item(vector<Item>& items) {
    string n;
    printf("Enter item's name: ");
	cin.ignore(10000, '\n');
	getline(cin, n);
    int i = find_item_by_name(items, n);
	if (i != -1) {
    	if (items[i].amount > 0)
   		{
			int a;
			cout << "Enter amount of items you want to buy: ";
			while (true) {
				if (!(cin >> a)) {
					cin.clear();
					cin.ignore(10000, '\n');
					cout << "\nEnter numeric amount: ";
					continue;
				}
				if (a < 0) {
					cout << "\nAmount cannot be negative: ";
					continue;
				}
				break;
            }
			if (a == 0) {
				cout << "No items were bought." << endl;
				return;
			}
			if (a > items[i].amount) {
				cout << "Not enough items in storage." << endl;
				return;
			}
			if(items[i].price == 0) {
				printf("Item(s) bought for free.\n");
			}
			else {
				printf("Item(s) bought for: %.2f UAH.\n", items[i].price * a);
			}        

			items[i].amount -= a;
		} else {
			printf("Item not avaible.\n");
		}
	} else {
		printf("No item with such name exists.\n");
	}
}

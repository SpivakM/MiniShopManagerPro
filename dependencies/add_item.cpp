#include "add_item.h"

void add_item(vector<Item>& items) {
	int Choose = 0;
    while (true) {
        cout << "  Menu" << endl;
        cout << "1 - Enter a product\n2 - Exit" << endl;
        if (!( cin >> Choose)) {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if(Choose == 1) {
            Item it;
            cout << "Enter the product name: ";
            cin.ignore();
            getline(cin, it.name);
            
            cout << "Enter price: ";
            while(true) {
                if(!(cin >> it.price)) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "\nEnter numeric price: ";
                    continue;
                }

                if(it.price < 0) {
                    cout << "\nPrice cannot be negative: ";
                    continue;
                }
                break;
            }

            cout << "Enter amount of product: ";
            while (true) {
                if(!(cin >> it.amount)) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "\nEnter numeric amount: ";
                    continue;
                }

                if(it.amount < 0) {
                    cout << "\nAmount cannot be negative: ";
                    continue;
                }
                break;
            }

            items.push_back(it);
            cout << "Product added.\n";
        }

        if(Choose == 2) {
            break;
        }
    }
}

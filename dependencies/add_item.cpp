#include "add_item.h"

void add_item(vector<Item>& items) {
    Item it;
    cout << "Enter the product name: ";
    cin.ignore();
    getline(cin, it.name);
    int amount;

    if (int index = find_item_by_name(items, it.name); index != -1) {
        cout << "Item already exists. What amount of items should be added: ";
        while (true) {
            if (!(cin >> it.amount)) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "\nEnter numeric amount: ";
                continue;
            }

            if (it.amount < 0) {
                cout << "\nAmount cannot be negative: ";
                continue;
            }
            break;
        }
        items[index].amount += it.amount;
        return;
    }

    cout << "Enter price: ";
    while (true) {
        if (!(cin >> it.price)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nEnter numeric price: ";
            continue;
        }

        if (it.price < 0) {
            cout << "\nPrice cannot be negative: ";
            continue;
        }
        break;
    }

    cout << "Enter amount of product: ";
    while (true) {
        if (!(cin >> amount)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nEnter numeric amount: ";
            continue;
        }

        if (amount < 0) {
            cout << "\nAmount cannot be negative: ";
            continue;
        }
        break;
    }
    it.amount = amount;

    items.push_back(it);
    cout << "Product added.\n";
}

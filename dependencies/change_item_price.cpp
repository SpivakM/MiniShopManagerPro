#include "change_item_price.h"

void change_item_price(vector<Item>& items) {
    if (items.empty()) {
        cout << "No items available.\n";
        return;
    }

    string name;
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, name);

    for (auto& item : items) {
        if (item.name == name) {
            cout << "Enter new price: ";
            cin >> item.price;

            if (item.price > 0 && item.price <= 10000) {
                cout << "Price updated to " << item.price << "\n";
            } else {
                cout << "Invalid price.\n";
            }
            return;
        }
    }

    cout << "Item not found.\n";
}

#include "change_item_price.h"
#include "find_item_by_name.h"

void change_item_price(vector<Item>& items) {
    if (items.empty()) {
        cout << "No items available.\n";
        return;
    }

    string name;
    cout << "Enter product name: ";
    cin.ignore();
    getline(cin, name);

    int index = find_item_by_name(items, name);
    if (index == -1) {
        cout << "Item not found!\n";
        return;
    }

    double temp;
    cout << "Enter new price: ";
    cin >> temp;

    if (temp > 0) {
        items[index].price = temp;
        cout << "Price updated to " << items[index].price << " UAH.\n";
    } else {
        cout << "Invalid price.\n";
    }
}

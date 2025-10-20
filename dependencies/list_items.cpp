#include "list_items.h"

void list_items(vector<Item>& items) {
    if (items.size() == 0) {
        cout << "There are no items." << endl;
        return;
    }
    cout << " ------ List of all items ------ " << endl;
    for (int i = 0; i < items.size(); i++) {
        cout << "\tName: " << items[i].name << endl;
        cout << std::fixed << std::setprecision(2) << "\tPrice: " << items[i].price << " UAH" << endl;
        cout << "\tAmount: " << items[i].amount << endl;
        cout << endl;
    }
}

#include "list_items.h"

void list_items(vector<Item>& items) {
    cout << " ------ List of all items ------ " << endl;
    cout << "   NAME - PRICE - AMOUNT  " << endl;
    for (int i = 0; i < items.size(); i++) {
        cout << i + 1 << ") " << items[i].name << " - " << items[i].price << " - " << items[i].amount << endl;
    }
}
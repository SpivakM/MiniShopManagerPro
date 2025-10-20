#include "list_items.h"

void list_items(vector<Item>& items) {
    if (items.size() == 0) {
        cout << "There are no items" << endl;
        return;
    }
    cout << " ------ List of all items ------ " << endl;
    cout << "   NAME - PRICE - AMOUNT  " << endl;
    for (int i = 0; i < items.size(); i++) {
        cout << i + 1 << ") " << items[i].name << " - " << items[i].price << " UAH - " << items[i].amount << endl;
    }
}

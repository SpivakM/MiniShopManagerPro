#include "list_under_100.h"

void list_under_100(vector<Item>& items) {
    int count = 0;
    for (int i = 0; i < items.size(); i++) {
        if (items[i].price <= 100) {
            count++;
            break;
        }
    }
    if (count == 0) {
        cout << "There are no items, cheaper than 100" << endl;
        return;
    }
    cout << " ------ List of items, cheaper than 100 ------ " << endl;
    cout << "   NAME - PRICE - AMOUNT  " << endl;
    for (int i = 0; i < items.size(); i++) {
        if (items[i].price <= 100) {
            cout << i + 1 << ") " << items[i].name << " - " << items[i].price << " - " << items[i].amount << endl;
        }
    }
}
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
        cout << "There are no items, cheaper than 100 UAH" << endl;
        return;
    }
    cout << " ------ List of items, cheaper than 100 UAH ------ " << endl;
    for (int i = 0; i < items.size(); i++) {
        if (items[i].price <= 100) {
            cout << "\tName: " << items[i].name << endl;
            cout << "\tPrice: " << items[i].price << " UAH" << endl;
            cout << "\tAmount: " << items[i].amount << "" << endl;
            cout << endl;
        }
    }
}

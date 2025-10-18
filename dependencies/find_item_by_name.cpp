#include "find_item_by_name.h"
#include <algorithm>

int find_item_by_name(vector<Item>& items) {

    string name;

    do {
        cout << "Enter the name to search for: ";
        getline(cin, name);
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        if (name == "q") {
            break;
        }

        for (int i = 0; i < items.size(); i++){
            if (items[i].name == name){
                cout << "\tname: " << name << endl;
                cout << "\tprice: " << items[i].price << endl;
                cout << "\tamount: " << items[i].amount << endl;
                return i;
            }
        }

        cout << "no such item" << endl;

    } while (1);

}

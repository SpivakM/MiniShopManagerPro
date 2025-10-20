#include "delete_item.h"

void delete_item(vector<Item>& items) {

    int item_index = find_item_by_name(items);
    if (item_index != -1) {
        items.erase(items.begin() + item_index);
        cout << "Item deleted successfully.\n";
    }

}

#include "find_item_with_max_price.h"

void find_item_with_max_price(vector<Item>& items) {

    int max_price=0;

    for (int i=0; i<items.size(); i++){
        
        if (items[i].price > max_price){

            max_price=items[i].price;
        }
    }

    for (int i=0; i<items.size(); i++){

        if (items[i].price == max_price){

            cout << items[i].name << endl;
        }
    }
}

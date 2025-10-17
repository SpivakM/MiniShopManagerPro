#include "find_item_with_max_price.h"

void find_item_with_max_price(vector<Item> items) {

    vector<int> max_price_item_index;
    max_price_item_index[0]=0;
    int c=0;

    for (int i=1; i<items.size(); i++){
        
        if (items[i].price > items[i-1].price){

            max_price_item_index[c]=i;
            c++;
        }
        else if (items[i].price == items[i-1].price){
            
            max_price_item_index[c]=i;
            c++;
        }
    }

    for (int i=0; i<c; i++){
        cout << items[i].name << endl;
    }
}

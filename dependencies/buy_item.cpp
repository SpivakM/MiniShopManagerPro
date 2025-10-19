#include "buy_item.h"

void buy_item(vector<Item>& items) {
    string n;
    printf("Enter Item`s name:\n");
    cin >> n;
    int i = find_item_by_name(items, n);
        if(items[i].amount > 0)
        {
            if(items[i].price == 0)
            {
                items[i].amount--;
                printf("Item bought for free \n");
            }
            else
            {
                items[i].amount--;
                printf("Item bought for: %u \n", items[i].price);
            }        
        }
        else
            printf("Item not avaible\n");
}

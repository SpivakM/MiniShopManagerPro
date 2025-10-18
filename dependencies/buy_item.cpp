#include "buy_item.h"

void buy_item(vector<Item>& items) {
    string n;
    printf("Enter Item`s name:\n");
    cin >> n;
    bool t=true;
    for(int i=0; i < items.size(); i++)
    {
        if(items[i].name == n)
        {
            if(items[i].amount > 0)
            {
                if(items[i].price == 0)
                {
                    items[i].amount--;
                    printf("Item bought for free \n", items[i].price);
                }
                else
                {
                    items[i].amount--;
                    printf("Item bought for: %u \n", items[i].price);
                }        
            }
            else
                printf("Item not avaible\n");
            t = false;
            break;
        }   
    }
    if(t)
    {
        printf("There is no such item\n");
    }
    
}

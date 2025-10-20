#include "buy_item.h"

void buy_item(vector<Item>& items) {
    string n;
    printf("Enter item's name: \n");
    cin >> n;
    int i = find_item_by_name(items, n);

	if (i != -1) {
    	if (items[i].amount > 0)
   		{
			if(items[i].price == 0) {
				printf("Item bought for free.\n");
			}
			else {
				printf("Item bought for: %f UAH.\n", items[i].price);
			}        

			items[i].amount--;
		} else {
			printf("Item not avaible.\n");
		}
	} else {
		printf("No item with such name exists.\n");
	}
}

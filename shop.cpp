#include <stdio.h>
#include "shop.h"



int main(void) {
	int command;
	printf("--- Menu ---\n");
	printf("LIST OF COMMANDS\n");
	

	vector<Item> items;

	do {
		printf("Enter command: ");
		scanf("%d", &command);

		// TODO: check inpurt

		switch (command) {
			case 1: 
				add_item(items);
				break;
			case 2: 
				buy_item(items);
				break;
			case 3: 
				change_item_price(items);
				break;
			case 4: 
				delete_item(items);
				break;
			case 5: 
				discount(items);
				break;
			case 6: 
				find_item_by_name(items);
				break;
			case 7: 
				find_item_with_max_price(items);
				break;
			case 8: 
				list_items(items);
				break;
			case 9: 
				list_under_100(items);
				break;
			case 10: 
				total_price(items);
				break;
			default: 
				printf("Wrong command. Try again.\n");
				break;
		} 
	} while (1);

	return 0;
}

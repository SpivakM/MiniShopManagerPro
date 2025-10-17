#include "shop.h"
#include <stdio.h>

int main(void) {
	char *input;
	int command;
	bool cont = true;

	printf("--- Menu ---\n");
	printf("LIST OF COMMANDS\n");

	vector<Item> items;

	do {
		printf("Enter command: ");
		scanf("%s", input);

		if (sscanf(input, "%d", &command) != 1) {
			printf("Input must containt command (number)\n");
			continue;
		}

		switch (command) {
			case 0:
				cont = false;
				break;
			case 1:
				print_list_of_commands();
				break;
			case 2: 
				add_item(items);
				break;
			case 3: 
				buy_item(items);
				break;
			case 4: 
				change_item_price(items);
				break;
			case 5: 
				delete_item(items);
				break;
			case 6: 
				discount(items);
				break;
			case 7: 
				find_item_by_name(items);
				break;
			case 8: 
				find_item_with_max_price(items);
				break;
			case 9: 
				list_items(items);
				break;
			case 10: 
				list_under_100(items);
				break;
			case 11: 
				total_price(items);
				break;
			default: 
				printf("Wrong command. Try again.\n");
				break;
		} 
	} while (cont);

	return 0;
}

void print_list_of_commands() {
    printf("--- Menu ---\n");
    printf("LIST OF COMMANDS\n");
    printf(
        "0 - Exit\n"
        "1 - Help\n"
        "2 - Add item\n"
        "3 - Buy item\n"
        "4 - Change price of item\n"
        "5 - Delete item\n"
        "6 - Discount\n"
        "7 - Find item by name\n"
        "8 - List items\n"
        "9 - List items with price under 100\n"
        "10 - Total price of items\n");
	
}

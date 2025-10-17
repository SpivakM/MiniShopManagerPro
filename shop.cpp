#include "shop.h"

#include <stdio.h>

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

int main(void) {
    int command;
	

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
                print_list_of_commands();
                break;
        }
    } while (1);

    return 0;
}

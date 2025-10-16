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

		// check inpurt

		switch (command) {
			case 1: break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			case 7: break;
			case 8: break;
			case 9: break;
			case 10: break;
			case 11: break;
			default: break;
		} 
	} while (1);

	return 0;
}

#include "total_price.h"

void total_price(vector<Item>& items) {
    double total = 0.0;
    for (const auto& item : items) {
        total += item.price * item.amount;
    }

    cout << "Total cost of storage: " << total << " UAH\n";

}

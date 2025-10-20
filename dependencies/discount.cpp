#include "discount.h"

void discount(vector<Item>& items) {

    bool found = false;
    for (auto& item : items) {
        double price = item.price;
        

        if (price > 1000) {
            price *= 0.9; 
            item.price = price;
            cout << "Product \"" << item.name << "\" got a 10% discount. New price: " << price << " UAH.\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No products over 1000 UAH found.\n";
    }

}

#include "buy_item.h"

void buy_item(vector<Item>& items) {
    string n;
    cout << "Enter name of Item"<<endl;
    cin >> n;
    bool t=true;
    for(int i=0; i < items.size(); i++)
    {
        if(items[i].name == n)
        {
            if(items[i].amount > 0)
            {
                items[i].amount--;
                cout << "Item bought"<<endl;
            }
            else
                cout << "Item not avaible"<<endl;
            t = false;
            break;
        }   
    }
    if(t)
    {
        cout << "There is no such item"<<endl;
    }
    
}

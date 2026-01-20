#include <iostream>
using namespace std;

int main() {
    int item_n, quantity;
    float unit_price, total_amount, diss, final_amount;
  
    cout << "Enter item number: ";
    cin >> item_n;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unit_price;    
    total_amount = quantity * unit_price;  
    diss = total_amount * 0.20;    
    final_amount = total_amount - diss;
     cout << "\nItem Number: " << item_n;
    cout << "\nTotal Amount: " << total_amount;
    cout << "\nDiscount (20%): " << diss;
    cout << "\nFinal Bill Amount: " << final_amount;

    return 0;
}
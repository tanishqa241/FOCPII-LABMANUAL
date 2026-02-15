#include <iostream>
using namespace std;

class Wholesale {
    int qty;
    float price;
public:
    void input() {
        cin >> qty >> price;
    }
    void calculate() {
        float total = qty * price;
        if (qty > 1000)
            total -= total * 0.10;
        cout << "Total Expense = " << total;
    }
};

int main() {
    Wholesale w;
    w.input();
    w.calculate();
    return 0;
}

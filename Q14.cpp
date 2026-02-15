#include <iostream>
using namespace std;

class Calculator {
public:
    void calculate() {
        int ch;
        float a, b;
        do {
            cin >> ch;
            if (ch == 5) break;
            cin >> a >> b;
            if (ch == 1) cout << a + b << endl;
            else if (ch == 2) cout << a - b << endl;
            else if (ch == 3) cout << a * b << endl;
            else if (ch == 4) cout << a / b << endl;
        } while (true);
    }
};

int main() {
    Calculator c;
    c.calculate();
    return 0;
}

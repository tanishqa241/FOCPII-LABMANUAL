#include <iostream>
using namespace std;

class LeapYear {
    int year;
public:
    void input() {
        cin >> year;
    }
    void check() {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            cout << "Leap Year";
        else
            cout << "Not a Leap Year";
    }
};

int main() {
    LeapYear y;
    y.input();
    y.check();
    return 0;
}

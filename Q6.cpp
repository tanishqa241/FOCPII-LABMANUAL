#include <iostream>
using namespace std;

class Salary {
    float basic;
public:
    void input() {
        cin >> basic;
    }
    void calculate() {
        float bonus = basic * 0.12;
        cout << "Net Salary = " << basic + bonus;
    }
};

int main() {
    Salary s;
    s.input();
    s.calculate();
    return 0;
}

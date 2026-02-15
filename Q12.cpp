#include <iostream>
using namespace std;

class Triangle {
    int a, b, c;
public:
    void input() {
        cin >> a >> b >> c;
    }
    void type() {
        if (a == b && b == c)
            cout << "Equilateral";
        else if (a == b || b == c || a == c)
            cout << "Isosceles";
        else
            cout << "Scalene";
    }
};

int main() {
    Triangle t;
    t.input();
    t.type();
    return 0;
}

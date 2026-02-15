/*#include <iostream>
using namespace std;
int main() {
    float radius, area;
    float pi = 3.1415;
    cout << "enter radius ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "Area of the circle is: " << area;
    return 0;
} */
#include <iostream>
using namespace std;

class Circle {
    float r;
public:
    void input() {
        cin >> r;
    }
    void area() {
        cout << "Area = " << 3.14 * r * r;
    }
};

int main() {
    Circle c;
    c.input();
    c.area();
    return 0;
}




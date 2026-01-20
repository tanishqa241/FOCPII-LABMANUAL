#include <iostream>
using namespace std;
int main() {
    float radius, area;
    float pi = 3.1415;
    cout << "enter radius ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "Area of the circle is: " << area;
    return 0;
} 
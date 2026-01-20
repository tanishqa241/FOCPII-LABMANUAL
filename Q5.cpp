#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b;
    return 0;
}

/*#include <iostream>
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
*/
#include <iostream>
using namespace std;

class Swap {
    int a, b;
public:
    void input() {
        cin >> a >> b;
    }
    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
        cout << a << " " << b;
    }
};

int main() {
    Swap s;
    s.input();
    s.swapValues();
    return 0;
}

#include <iostream>
using namespace std;

class Largest {
public:
    void findMax(int n) {
        int num, max;
        cin >> max;
        for (int i = 1; i < n; i++) {
            cin >> num;
            if (num > max)
                max = num;
        }
        cout << "Largest = " << max;
    }
};

int main() {
    Largest l;
    int n;
    cin >> n;
    l.findMax(n);
    return 0;
}

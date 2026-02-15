#include <iostream>
using namespace std;

class BuzzFuzz {
public:
    void display(int n) {
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                cout << "BuzzFuzz ";
            else if (i % 3 == 0)
                cout << "Buzz ";
            else if (i % 5 == 0)
                cout << "Fuzz ";
            else
                cout << i << " ";
        }
    }
};

int main() {
    BuzzFuzz b;
    int n;
    cin >> n;
    b.display(n);
    return 0;
}

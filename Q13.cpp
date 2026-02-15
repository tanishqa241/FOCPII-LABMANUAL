#include <iostream>
#include <cmath>
using namespace std;

class Quadratic {
    float a, b, c;
public:
    void input() {
        cin >> a >> b >> c;
    }
    void roots() {
        float d = b*b - 4*a*c;
        cout << "Roots = "
             << (-b + sqrt(d)) / (2*a) << " , "
             << (-b - sqrt(d)) / (2*a);
    }
};

int main() {
    Quadratic q;
    q.input();
    q.roots();
    return 0;
}

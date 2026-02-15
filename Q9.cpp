#include <iostream>
using namespace std;

class Check {
    char ch;
public:
    void input() {
        cin >> ch;
    }
    void classify() {
        if (ch >= '0' && ch <= '9')
            cout << "Number";
        else if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                 ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            cout << "Vowel";
        else
            cout << "Consonant";
    }
};

int main() {
    Check c;
    c.input();
    c.classify();
    return 0;
}

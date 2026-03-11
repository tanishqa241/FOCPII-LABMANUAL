#include <iostream>
using namespace std;

class Butterfly
{
public:
    void display()
    {
        int n = 5;

        // Upper part
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
                cout << "*";

            for(int j = 1; j <= 2*(n-i); j++)
                cout << " ";

            for(int j = 1; j <= i; j++)
                cout << "*";

            cout << endl;
        }

        // Lower part
        for(int i = n; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
                cout << "*";

            for(int j = 1; j <= 2*(n-i); j++)
                cout << " ";

            for(int j = 1; j <= i; j++)
                cout << "*";

            cout << endl;
        }
    }
};

int main()
{
    Butterfly b;
    b.display();
    return 0;
}
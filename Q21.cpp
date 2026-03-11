#include <iostream>
using namespace std;

class Pattern2
{
public:
    void display()
    {
        for(int i = 5; i >= 1; i--)   // rows
        {
            for(int j = 5; j >= 6 - i; j--)  // numbers
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Pattern2 p;
    p.display();
    return 0;
}
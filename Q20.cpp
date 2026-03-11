#include <iostream>
using namespace std;

class Pattern1
{
public:
    void display()
    {
        for(int i = 1; i <= 3; i++)   // rows
        {
            for(int j = 1; j <= 5; j++)  // columns
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Pattern1 p;
    p.display();
    return 0;
}
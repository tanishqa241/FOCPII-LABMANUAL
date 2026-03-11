#include <iostream>
using namespace std;

class HollowDiamond
{
public:
    void display()
    {
        int n = 4;

        // Upper part
        for(int i = 1; i <= n; i++)
        {
            for(int j = i; j < n; j++)
                cout << " ";

            for(int j = 1; j <= (2*i-1); j++)
            {
                if(j == 1 || j == (2*i-1))
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }

        // Lower part
        for(int i = n-1; i >= 1; i--)
        {
            for(int j = n; j > i; j--)
                cout << " ";

            for(int j = 1; j <= (2*i-1); j++)
            {
                if(j == 1 || j == (2*i-1))
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    HollowDiamond d;
    d.display();
    return 0;
}
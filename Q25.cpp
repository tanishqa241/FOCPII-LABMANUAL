#include <iostream>
using namespace std;

class AlphabetPattern
{
public:
    void display()
    {
        char ch;

        for(int i = 1; i <= 5; i++)
        {
            ch = 'A';

            for(int j = 1; j <= i; j++)
            {
                cout << ch;
                ch++;
            }

            cout << endl;
        }
    }
};

int main()
{
    AlphabetPattern a;
    a.display();
    return 0;
}
#include <iostream>
using namespace std;

class Prime
{
    int num;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkPrime()
    {
        if(num <= 1)
        {
            cout << num << " is not a Prime number";
            return;
        }

        for(int i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                cout << num << " is not a Prime number";
                return;
            }
        }

        cout << num << " is a Prime number";
    }
};

int main()
{
    Prime p;      // object creation
    p.input();    // function call for input
    p.checkPrime(); // function call for checking
   return 0;
   
}
#include <iostream>
using namespace std;

class PrimeRange
{
    int start, end;

public:
    void input()
    {
        cout << "Enter start of range: ";
        cin >> start;

        cout << "Enter end of range: ";
        cin >> end;
    }

    void findPrime()
    {
        for(int i = start; i <= end; i++)
        {
            if(i <= 1)
                continue;

            int j;
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                    break;
            }

            if(j == i)
                cout << i << " ";
        }
    }
};

int main()
{
    PrimeRange p;

    p.input();
    cout << "Prime numbers in the range are: ";
    p.findPrime();

    return 0;
}
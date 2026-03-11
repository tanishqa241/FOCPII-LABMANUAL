#include <iostream>
using namespace std;

class PrimeRange
{
    int a,b;

public:
    void input()
    {
        cout<<"Enter starting limit: ";
        cin>>a;
        cout<<"Enter ending limit: ";
        cin>>b;
    }

    void displayPrime()
    {
        for(int i=a;i<=b;i++)
        {
            int count=0;

            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                count++;
            }

            if(count==2)
            cout<<i<<" ";
        }
    }
};

int main()
{
    PrimeRange p;
    p.input();
    cout<<"Prime numbers are: ";
    p.displayPrime();
}
#include <iostream>
using namespace std;

class Divisible
{
    int a[5], count=0;

public:
    void input()
    {
        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    void check()
    {
        for(int i=0;i<5;i++)
        {
            if(a[i]%3==0 && a[i]%5==0)
                count++;
        }
    }

    void display()
    {
        cout<<"Numbers divisible by 3 and 5 = "<<count;
    }
};

int main()
{
    Divisible d;
    d.input();
    d.check();
    d.display();
}
#include <iostream>
using namespace std;

class EvenOdd
{
    int a[5], even=0, odd=0;

public:
    void input()
    {
        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++)
        cin>>a[i];
    }

    void calculate()
    {
        for(int i=0;i<5;i++)
        {
            if(a[i]%2==0)
            even+=a[i];
            else
            odd+=a[i];
        }
    }

    void display()
    {
        cout<<"Sum of Even numbers = "<<even<<endl;
        cout<<"Sum of Odd numbers = "<<odd;
    }
};

int main()
{
    EvenOdd e;
    e.input();
    e.calculate();
    e.display();
}
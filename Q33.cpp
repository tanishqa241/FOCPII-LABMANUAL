#include <iostream>
using namespace std;

class Largest
{
    int a[5], first, second;

public:
    void input()
    {
        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    void find()
    {
        first=second=a[0];

        for(int i=0;i<5;i++)
        {
            if(a[i]>first)
            {
                second=first;
                first=a[i];
            }
            else if(a[i]>second && a[i]!=first)
                second=a[i];
        }
    }

    void display()
    {
        cout<<"Largest = "<<first<<endl;
        cout<<"Second Largest = "<<second;
    }
};

int main()
{
    Largest l;
    l.input();
    l.find();
    l.display();
}
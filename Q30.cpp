#include <iostream>
using namespace std;

class Temperature
{
    int temp[30], min;

public:
    void input()
    {
        cout<<"Enter temperature for 30 days:\n";
        for(int i=0;i<30;i++)
        cin>>temp[i];
    }

    void findMin()
    {
        min=temp[0];

        for(int i=1;i<30;i++)
        {
            if(temp[i]<min)
            min=temp[i];
        }
    }

    void display()
    {
        cout<<"Minimum temperature = "<<min;
    }
};

int main()
{
    Temperature t;
    t.input();
    t.findMin();
    t.display();
}
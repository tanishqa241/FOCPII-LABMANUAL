#include <iostream>
using namespace std;

class PriceList
{
    int price[10], max;

public:
    void input()
    {
        cout<<"Enter prices of 10 items:\n";
        for(int i=0;i<10;i++)
        cin>>price[i];
    }

    void findMax()
    {
        max=price[0];

        for(int i=1;i<10;i++)
        {
            if(price[i]>max)
            max=price[i];
        }
    }

    void display()
    {
        cout<<"Maximum price = "<<max;
    }
};

int main()
{
    PriceList p;
    p.input();
    p.findMax();
    p.display();
}
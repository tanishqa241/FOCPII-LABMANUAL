#include <iostream>
using namespace std;

class Payroll
{
    float salary[10], total=0, avg;

public:
    void input()
    {
        cout<<"Enter salary of 10 employees:\n";
        for(int i=0;i<10;i++)
            cin>>salary[i];
    }

    void calculate()
    {
        for(int i=0;i<10;i++)
            total+=salary[i];

        avg=total/10;
    }

    void display()
    {
        cout<<"Total Salary = "<<total<<endl;
        cout<<"Average Salary = "<<avg;
    }
};

int main()
{
    Payroll p;
    p.input();
    p.calculate();
    p.display();
}
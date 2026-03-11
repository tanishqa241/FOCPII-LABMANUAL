#include <iostream>
using namespace std;

class ReportCard
{
    int marks[5], total=0;
    float percentage;

public:
    void input()
    {
        cout<<"Enter marks of 5 subjects:\n";
        for(int i=0;i<5;i++)
        cin>>marks[i];
    }

    void calculate()
    {
        for(int i=0;i<5;i++)
        total+=marks[i];

        percentage = total/5.0;
    }

    void display()
    {
        cout<<"Total Marks = "<<total<<endl;
        cout<<"Percentage = "<<percentage<<"%";
    }
};

int main()
{
    ReportCard r;
    r.input();
    r.calculate();
    r.display();
}
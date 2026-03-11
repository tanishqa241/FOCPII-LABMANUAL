#include <iostream>
using namespace std;

class StudentMarks
{
    int marks[3][5];

public:
    void input()
    {
        cout<<"Enter marks of 3 students (5 subjects each):\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<5;j++)
                cin>>marks[i][j];
    }

    void display()
    {
        cout<<"Marks in 2nd subject of 1st student = "<<marks[0][1]<<endl;
        cout<<"Marks in 5th subject of 3rd student = "<<marks[2][4];
    }
};

int main()
{
    StudentMarks s;
    s.input();
    s.display();
}
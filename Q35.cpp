#include <iostream>
using namespace std;

class MatrixSum
{
    int a[3][3], b[3][3], c[3][3];

public:
    void input()
    {
        cout<<"Enter first matrix:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>a[i][j];

        cout<<"Enter second matrix:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>b[i][j];
    }

    void add()
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                c[i][j]=a[i][j]+b[i][j];
    }

    void display()
    {
        cout<<"Sum Matrix:\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<c[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    MatrixSum m;
    m.input();
    m.add();
    m.display();
}
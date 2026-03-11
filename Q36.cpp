#include <iostream>
using namespace std;

class Transpose
{
    int a[3][3];

public:
    void input()
    {
        cout<<"Enter matrix:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>a[i][j];
    }

    void display()
    {
        cout<<"Transpose Matrix:\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<a[j][i]<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    Transpose t;
    t.input();
    t.display();
}
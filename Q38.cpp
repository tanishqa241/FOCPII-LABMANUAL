#include <iostream>
#include <string>
using namespace std;

class Username
{
    string name;
    int valid=1;

public:
    void input()
    {
        cout<<"Enter username: ";
        cin>>name;
    }

    void check()
    {
        for(int i=0;i<name.length();i++)
        {
            if(!(isalnum(name[i])))
            {
                valid=0;
                break;
            }
        }
    }

    void display()
    {
        if(valid)
            cout<<"Username Accepted";
        else
            cout<<"Invalid Username";
    }
};

int main()
{
    Username u;
    u.input();
    u.check();
    u.display();
}
#include <iostream>
#include <string>
using namespace std;

class StringProcess
{
    string str;

public:
    void input()
    {
        cout<<"Enter a string: ";
        getline(cin,str);
    }

    void process()
    {
        int words=0,digits=0,special=0;

        for(int i=0;i<str.length();i++)
        {
            if(isdigit(str[i])) digits++;
            else if(!isalnum(str[i]) && str[i]!=' ') special++;
        }

        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ' && str[i+1]!=' ')
                words++;
        }
        words++;

        if(str.length()>0)
        {
            str[0]=toupper(str[0]);
            for(int i=1;i<str.length();i++)
                str[i]=tolower(str[i]);
        }

        cout<<"Processed String: "<<str<<endl;
        cout<<"Words: "<<words<<endl;
        cout<<"Digits: "<<digits<<endl;
        cout<<"Special Characters: "<<special<<endl;

        int valid=1;
        for(int i=0;i<str.length();i++)
        {
            if(!(isalnum(str[i]) || str[i]==' '))
            {
                valid=0;
                break;
            }
        }

        if(valid)
            cout<<"String is Valid";
        else
            cout<<"Invalid Characters Found";
    }
};

int main()
{
    StringProcess s;
    s.input();
    s.process();
}
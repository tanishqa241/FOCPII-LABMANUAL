#include <iostream>
#include <string>
using namespace std;

class Palindrome
{
    string id, rev;

public:
    void input()
    {
        cout << "Enter ID: ";
        cin >> id;
    }

    void checkPalindrome()
    {
        rev = id;

        for(int i = id.length()-1; i >= 0; i--)
            cout << id[i];

        cout << endl;

        rev = "";

        for(int i = id.length()-1; i >= 0; i--)
            rev = rev + id[i];

        if(rev == id)
            cout << "ID is Palindrome";
        else
            cout << "ID is not Palindrome";
    }
};

int main()
{
    Palindrome p;

    p.input();
    p.checkPalindrome();

    return 0;
}
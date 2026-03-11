#include <iostream>
using namespace std;

class NumberCheck
{
    int num;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkPerfect()
    {
        int sum = 0;

        for(int i = 1; i < num; i++)
        {
            if(num % i == 0)
                sum = sum + i;
        }

        if(sum == num)
            cout << num << " is a Perfect Number" << endl;
        else
            cout << num << " is not a Perfect Number" << endl;
    }

    void checkArmstrong()
    {
        int temp = num, rem, sum = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num)
            cout << num << " is an Armstrong Number";
        else
            cout << num << " is not an Armstrong Number";
    }
};

int main()
{
    NumberCheck n;

    n.input();
    n.checkPerfect();
    n.checkArmstrong();

    return 0;
}
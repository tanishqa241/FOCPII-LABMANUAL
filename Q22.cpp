#include <iostream>
using namespace std;

class HollowRectangle
{
public:
    void display()
    {
        int rows = 7, cols = 7;

        for(int i = 1; i <= rows; i++)
        {
            for(int j = 1; j <= cols; j++)
            {
                if(i == 1 || i == rows || j == 1 || j == cols)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    HollowRectangle h;
    h.display();
    return 0;
}
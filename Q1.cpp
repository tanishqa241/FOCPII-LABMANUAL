/*#include <iostream>
using namespace std;
int main() {
    int marks1 , marks2 , marks3 , marks4 , marks5 ;
    float average ;
    cout << "Enter marks of five subjects: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5 ;
    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0 ;
    cout << "The average marks are: " << average ;  
    return 0 ;
}*/
#include <iostream>
using namespace std;

class Average {
    float a, b, c;
public:
    void input() {
        cin >> a >> b >> c;
    }
    void calculate() {
        cout << "Average = " << (a + b + c) / 3;
    }
};

int main() {
    Average obj;
    obj.input();
    obj.calculate();
    return 0;
}


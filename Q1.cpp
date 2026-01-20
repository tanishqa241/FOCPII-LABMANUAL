#include <iostream>
using namespace std;
int main() {
    int marks1 , marks2 , marks3 , marks4 , marks5 ;
    float average ;
    cout << "Enter marks of five subjects: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5 ;
    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0 ;
    cout << "The average marks are: " << average ;  
    return 0 ;
}

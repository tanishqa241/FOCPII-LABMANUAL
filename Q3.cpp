/*#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius;
    return 0;
}*/
#include <iostream>
using namespace std;

class Temperature {
    float temp;
public:
    void fahrenheitToCelsius() {
        cin >> temp;
        cout << "Celsius = " << (temp - 32) * 5 / 9;
    }
};

int main() {
    Temperature t;
    t.fahrenheitToCelsius();
    return 0;
}


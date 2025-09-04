#include <iostream>
using namespace std;

int main() {
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    double f = (c * 9 / 5) + 32;
    cout << "Fahrenheit = " << f << endl;
    return 0;
}

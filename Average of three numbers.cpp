#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    double avg = (a + b + c) / 3;
    cout << "Average = " << avg << endl;
    return 0;
}

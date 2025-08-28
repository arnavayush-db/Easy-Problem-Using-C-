#include <iostream>
using namespace std;

int main() {
    double p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;
    double si = (p * r * t) / 100;
    cout << "Simple Interest = " << si << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    t = a;
    a = b;
    b = t;
    cout << "After swap: " << a << " " << b << endl;
    return 0;
}

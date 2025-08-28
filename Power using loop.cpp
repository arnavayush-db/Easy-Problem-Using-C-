#include <iostream>
using namespace std;

int main() {
    int a, b, p = 1;
    cout << "Enter base and exponent: ";
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        p *= a;
    }
    cout << "Result = " << p << endl;
    return 0;
}

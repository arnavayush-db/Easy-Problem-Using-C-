#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) cout << "Largest = " << a << endl;
    else cout << "Largest = " << b << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int marks;
    cin >> marks;
    if (marks >= 90) cout << "A";
    else if (marks >= 75) cout << "B";
    else if (marks >= 50) cout << "C";
    else if (marks >= 35) cout << "D";
    else cout << "Fail";
    return 0;
}

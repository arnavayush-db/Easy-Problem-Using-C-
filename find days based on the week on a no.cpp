#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string days[]={"Invalid","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    if(n>=1 && n<=7) cout << days[n];
    else cout << "Invalid";
    return 0;
}

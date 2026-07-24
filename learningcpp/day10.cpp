#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;

    while (n > 0) {
        int digit = n%10;
        odd = odd + digit;
        n = n/10;
        
        digit = n%10;
        even = even + digit;
        n = n/10;
    }
    cout << odd << '\n';
    cout << even;
    return 0;
}
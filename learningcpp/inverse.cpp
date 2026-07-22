#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int inverse = 0;
    int position = 1;

    while (n > 0) {
        int digit = n%10;
        inverse = inverse + position*pow(10, digit - 1);
        n = n/10;
        position++;
    }
    cout << inverse;
    return 0;
}
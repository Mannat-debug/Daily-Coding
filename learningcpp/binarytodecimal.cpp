#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int decimal = 0;
    int position = 1;

    while (n > 0) {
        int digit = n%10;
        decimal = decimal + digit*pow(2, position - 1);
        n = n/10;
        position++;
    }
    cout << decimal;
    return 0;
}
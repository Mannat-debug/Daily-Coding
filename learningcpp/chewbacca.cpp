#include <iostream>
using namespace std;

long long invert(long long n) {
    long long inv = 0;
    long long place = 1;

    while (n > 0) {
        int digit = n % 10;

        // Don't invert the first digit if it is 9
        if (digit >= 5) {
            if (!(n < 10 && digit == 9)) {
                digit = 9 - digit;
            }
        }

        inv += digit * place;
        place *= 10;
        n /= 10;
    }

    return inv;
}

int main() {
    long long n;
    cin >> n;
    cout << invert(n);
    return 0;
}
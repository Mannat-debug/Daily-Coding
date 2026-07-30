#include <iostream>
using namespace std;

long long invert(long long n) {
    long long inv = 0;
    long long place = 1;

    while (n > 0) {
        int digit = n % 10;

        if (digit == 0) {
            digit = 5;
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
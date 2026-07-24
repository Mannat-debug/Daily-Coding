#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int n;
        cin >> n;

        int decimal = 0;
        int power = 1;

        while (n > 0) {
            int digit = n % 10;

            decimal += digit * power;
            power *= 2;
            n /= 10;
        }

        cout << decimal << '\n';
    }

    return 0;
}
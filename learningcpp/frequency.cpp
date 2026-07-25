#include <iostream>
using namespace std;

int main() {
    int n, N;
    cin >> n >> N;
    int count = 0;
    int position = 0;

    while (n > 0) {
        int digit = n%10;

        if (digit == N) {
            count++;
        }

        n/=10;

        position++;
    }
    cout << count;

    return 0;
}
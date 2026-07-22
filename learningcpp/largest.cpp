#include <iostream>
#include <climits>
using namespace std;

int main() {
    int max = INT_MIN;

    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;

        if (n > max) {
            max = n;
        }
    }

    cout << max;
    return 0;
}
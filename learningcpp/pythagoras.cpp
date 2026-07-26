#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n1;
    int n2;

    if (n < 3) {
        cout << "-1";
    }
    else {
        if (n%2 == 0) {
            n1 = ((n*n)/2) - 1;
            n2 = ((n*n)/2) + 1;
        }
        else {
            n1 = (n*n - 1) / 2;
            n2 = (n*n + 1) / 2;
        }
        cout << static_cast<int>(n1) << " " << static_cast<int>(n2);
    }
    return 0;
}
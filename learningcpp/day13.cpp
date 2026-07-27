#include <iostream>
using namespace std;
int factorial(int n) {
    int product = 1;
    for (int j = 1; j <= n; j++) {
        product = product*j;
    }
    int ans = product;
    return product;
}
int main() {
    int n, r;
    cin >> n;
    cin >> r;

    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);

    int answer = a/(b*c);

    cout << answer;

    return 0;
}
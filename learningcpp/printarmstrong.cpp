#include <iostream>
#include <cmath>
using namespace std;

int countdigits(int N) {
    if (N == 0) {
        return 1;
    }
    int n = 0;
    while (N>0) {
        N/=10;
        n++;
    }
    return n;
}

bool checkarmstrong(int N) {
    int n = countdigits(N);
    int arm = 0;
    int original = N;

    while (original > 0) {
        int digit = original%10;
        arm = arm + static_cast<int>(pow(digit, n));
        original/=10;
    }

    return arm == N;
    
}

int main() {
    int N1,N2;
    cin >> N1 >> N2;

    for (int i = N1; i <= N2; i++) {
        if (checkarmstrong(i))
        cout << i << '\n';
    }

    return 0;
}
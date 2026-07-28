#include <iostream>
using namespace std;

int checknumber(int n) {
    int oddsum;
    int evensum;
    while (n>0) {
        int digit = n%10;

        if (digit%2==0) {
            evensum += digit;
        }
        else {
            oddsum+=digit;
        }

        n/=10;
    }

    if (oddsum%3==0 || evensum%4==0) {
        cout << "Yes" << '\n';
    }
    else {
        cout << "No" << '\n';
    }

    return 0;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        int n;
        cin >> n;
        checknumber(n);
    }
    return 0;
}
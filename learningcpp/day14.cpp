#include <iostream>
using namespace std;

int trailingzeroes(int n) {
    int ans;
    for (int d = 5; n/d>=1; d*=5) {
        ans += n/d;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << trailingzeroes(n) ;
    return 0;
}
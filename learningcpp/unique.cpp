#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        ans = ans^n;
    }
    cout << ans;
    return 0;
}
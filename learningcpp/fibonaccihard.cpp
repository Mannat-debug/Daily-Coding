#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;
    int c;

    for (int i = 2; i<=N; i++) {
            c = a + b;
            a = b;
            b = c;
    }
    cout << c ;
    return 0;
}
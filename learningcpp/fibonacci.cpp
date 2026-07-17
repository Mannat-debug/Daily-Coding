#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;

    for (int i = 0; i<N; i++) {
        for (int j = 0; j<=i; j++) {
            cout << a << "\t";
            int c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}
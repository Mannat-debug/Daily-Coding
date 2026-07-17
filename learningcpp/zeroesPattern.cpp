#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 1;

    for (int i = 1; i<=N; i++) {
        int numZeroes = i-2;
        for (int j = 1; j<=i; j++) {
            if (j == 1 || j == i) {
                cout << num << "\t";
            } else {
                cout << "0\t";
            }
        }
        num++;
        cout << endl;
    }
    return 0;
}
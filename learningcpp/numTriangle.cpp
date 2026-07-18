#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int numspaces = n - i;
        for (int j = 1; j <= numspaces; j++) {
            cout << " \t";
        }

        int num = i;

        for (int j = 1; j <= i; j++) {
            cout << num << "\t";
            num++;
        }

        num = num - 2;

        for (int j = 1; j<=i-1; j++) {
            cout << num << "\t";
            num = num - 1;
        }
        cout << endl;
    }
    return 0;
}
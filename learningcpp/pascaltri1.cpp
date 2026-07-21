#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int value = 1;
        int numspaces = N - i - 1;

        for (int j = 0; j < numspaces; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << value << " ";

            // Calculate the next value in the row
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
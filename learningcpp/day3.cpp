#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << string(N-1,' ');

    cout << string(N,'*');

    cout << endl;

    int totalRows = N - 1;

    for (int i = 1; i <= totalRows; i++) {
        int numSpaces = totalRows - i;

        for (int j = 0; j < numSpaces; j++) {
            cout << " ";
        }

        if (i < totalRows) {
        cout << "*";

        cout << string(N-2, ' ');

        cout << "*";}
        else {
            cout << string(N, '*');
        }

        cout << endl;
    }
return 0;
}
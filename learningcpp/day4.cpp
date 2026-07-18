#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = (n + 1) / 2;
    for ( int i = 0; i < n; i++ ) {
        int numSpaces, numStars;
        if ( i < a-1) {
            numStars = a - i;
            numSpaces = i;
        }
        else if ( i == a-1 ) {
            numStars = 1;
            numSpaces = a;
        }
        else {
            numStars = i - a + 2;
            numSpaces = n - i - 1;
        }

        for ( int j = 0; j < numStars; j++ ) {
            cout << "*\t";
        }

        if (numSpaces > 0) {
            for ( int j = 0; j < numSpaces; j++ ) {
                cout << " \t";
            }
            for ( int j = 0; j < numStars; j++ ) {
                cout << "*\t";
            }
        }
        else {
            for ( int j = 0; j < numStars-1; j++ ) {
                cout << "*\t";
            }
        }
        cout << endl;
    }
    return 0;
}
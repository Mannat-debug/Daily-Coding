#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = (n + 1) / 2;
    for ( int i = 0; i < n; i++ ) {
        int numSpaces, numStars;
        if ( i < a) {
            numSpaces = a - i - 1;
            numStars = 2 * i + 1;}
        else {
            numSpaces = i - a + 1;
            numStars = 2 * (n - i) - 1;
        }

        for ( int j = 0; j < numSpaces; j++ ) {
            cout << " \t";
        }

        for ( int j = 0; j < numStars; j++ ) {
            cout << "*\t";
        }

        cout << endl;
    }
    return 0;
}
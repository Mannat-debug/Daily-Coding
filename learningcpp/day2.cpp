#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalRows = 2 * N - 1;

    for (int i = 0; i < totalRows; i++) {
        int numSpaces, numStars;
        if (i < N) {
            numStars = N-i;
            numSpaces = 2*i - 1;
        } else {
            numStars = i-N+2;
            numSpaces = 2*(totalRows-i-1) - 1;
        }
    
        for (int j = 0; j < numStars; j++) {
            cout << "*";
        }

        if (numSpaces > 0) {
            for (int j = 0; j < numSpaces; j++) {
                cout << " ";
            }
            for (int j = 0; j < numStars; j++) {
                cout << "*";
            }
        }
        else {
            for (int j = 0; j < numStars-1; j++) {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}
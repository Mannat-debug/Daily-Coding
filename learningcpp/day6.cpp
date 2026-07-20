#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++ ) {
        int numspaces = n - i;
        int num = 1;

        for ( int j = 0; j < i; j++) {
            cout << num << "\t";
            num++;
        }

        num = num - 1;
        
        if (numspaces > 0) {
            for ( int j = 0; j < numspaces; j++) {
            cout << " \t";
        }
        
        for ( int j = 0; j < numspaces - 1; j++) {
            cout << " \t";
        } 
        
        for ( int j = 0; j < i; j++) {
            cout << num << "\t";
            num = num-1;
        }
    }
    else {
        num = num - 1;
        for ( int j = 0; j < i - 1; j++) {
            cout << num << "\t";
            num = num-1;
        }

    }
        num = 1;
        cout << endl;
    }
    return 0;
}
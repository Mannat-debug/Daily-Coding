#include <iostream>
using namespace std;
int main() {
    int n{};
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int numspaces = (2*(n-i))+1;
        int value = n;

        for (int j = 0; j < i; j++) {
                cout << value << " ";
                value--;
            }
        
        for (int j = 0; j < numspaces; j++) {
                cout << " ";
        }

        for (int j = 0; j < numspaces; j++) {
                cout << " ";
        }

        value++;

        for (int j = 0; j < i; j++) {
                cout << value << " ";
                value++;
        }
        cout << endl;
    }

    for (int i= 1; i < 2; i++) {
        int value = n;
        for (int j = 0; j < n+1; j++) {
            cout << value << " ";
            value--;
        }
        value = 1;
        for (int j = 0; j < n; j++) {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }

    for ( int i = 0; i < n; i++) {
        int numspaces = (2*i)+1;
        int value = n;

        for (int j = 1; j <= n-i; j++) {
                cout << value << " ";
                value--;
            }
        
        for (int j = 0; j < numspaces; j++) {
                cout << " ";
        }

        for (int j = 0; j < numspaces; j++) {
                cout << " ";
        }

        value++;

        for (int j = 1; j <= n-i; j++) {
                cout << value << " ";
                value++;
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = (n+1)/2;

    for (int i = 0; i < num-1; i++) {
        int numspaces1 = 2*(n - (2*i) - 1);
        int value = i + 1;
        int numspaces2 = 4*i - 2;

        for (int j = 0; j < numspaces1; j++) {
            cout << " ";
        }

        for (int j = 0; j < i+1; j++) {
            cout << value << " ";
            value--;
        }
        
        if (i > 0) {
            for (int j = 0; j < numspaces2; j++) {
            cout << " ";
            }

            value = 1;

            for (int j = 0; j < i+1; j++) {
            cout << value << " ";
            value++;
            }
        }
        cout << endl;
    }

    for (int i = 1; i<2; i++){
        int numspaces= 2*(n - 3);
        int value = num;

        for (int j = 0; j < num; j++) {
            cout << value << " ";
            value--;
        }

        for (int j = 0; j < numspaces; j++) {
            cout << " ";
        }

        value = 1;
        
        for (int j = 0; j < num; j++) {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }

    for (int i = 0; i <= num-1; i++) {
        int numspaces1 = 4*(i+1);
        int value = num - i - 1;
        int numspaces2 = 4*(num-i-2)-2;

        for (int j = 0; j < numspaces1; j++) {
            cout << " ";
        }

        for (int j = 0; j < num - i - 1; j++) {
            cout << value << " ";
            value--;
        }
        
        if (i < num-2) {
            for (int j = 0; j < numspaces2; j++) {
            cout << " ";
            }

            value = 1;

        
            for (int j = 0; j < num - i - 1; j++) {
            cout << value << " ";
            value++;
            }
        
        }
        cout << endl;
    }
    return 0;
}
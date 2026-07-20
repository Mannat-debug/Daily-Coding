#include <iostream>
using namespace std;
int main() {
    int n{};
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int numspaces = 2*(i-1);
        int num = n - i + 1;
        int value = n - i + 1;

        if (numspaces == 0) {
            for (int j = 0; j < num; j++) {
                cout << value << " ";
                value--;
            }

            value = 1;
            cout << 0 << " ";

            for (int j = 0; j < num; j++) {
                cout << value << " ";
                value++;
            }
            cout << endl;
            }  
            else {
                for (int j = 0; j < numspaces; j++) {
                    cout << " ";
                }
                for (int j = 0; j < num; j++) {
                cout << value << " ";
                value--;
            }

            value = 1;
            cout << 0 << " ";

            for (int j = 0; j < num; j++) {
                cout << value << " ";
                value++;
            }
            cout << endl;
            }  
            }
        
    cout << string(2*n, ' ');
    cout << "0\n";

    for (int i = 1; i <= n; i++) {
        int numspaces = 2*(n - i);
        int value = i;

        if (numspaces > 0) {
            for (int j = 0; j < numspaces; j++) {
                cout << " ";
            }
        
            for (int j = 0; j < i; j++) {
                cout << value << " ";
                value--;
            }
            value = 1;
            cout << 0 << " ";
            for (int j = 0; j < i; j++) {
                cout << value << " ";
                value++;
            }
            cout << endl;
        }
        else {
            for (int j = 0; j < i; j++) {
                cout << value << " ";
                value--;
            }
            value = 1;
            cout << 0 << " ";
            for (int j = 0; j < i; j++) {
                cout << value << " ";
                value++;
            }
            cout << endl;
        }   
    }
            return 0;
}
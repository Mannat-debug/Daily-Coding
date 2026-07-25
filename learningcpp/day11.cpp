#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cin >> n1 >> n2;
    int n;
    if (n1>n2)
        n = n2;
    else 
        n = n1;

    int max = 0;

    for (int i = 1; i<=n; i++) {

        if (n1%i == 0 && n2%i == 0) {
            max = i;
        }

    }

    cout << max;

    return 0;
}
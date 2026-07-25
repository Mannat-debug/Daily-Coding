#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cin >> n1 >> n2;
    int lcm = 0;
    int i;
    int n = n1*n2;

    for (i = 1; i <=n; i++) {
        if (i%n1==0 && i%n2==0) {
            lcm = i;
            break;
        }
        else 
            continue;
    }

    cout << lcm;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;

    int count = 0;
    int i = 1;
    while (count < n1){
        int term = 3*i + 2;
        if (term%n2!=0) {
        cout << term << endl;
        count++;
        }
        i++;
    }
    return 0;
}
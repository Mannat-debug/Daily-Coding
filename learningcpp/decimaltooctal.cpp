#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int octal = 0;
    int position = 1;

    while (n > 0) {
        int rem = n%8;
        octal = octal + rem*pow(10, position - 1);
        n = n/8;
        position++;
    }
    cout << octal;
    return 0;
}
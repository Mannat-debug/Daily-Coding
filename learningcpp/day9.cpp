#include <iostream>
using namespace std;

int main () {
    int i = 5;

    do {
        cout << i;
        i++;
    }
    while (i < 5);

    i = 5;
    while (i < 5) {
        cout << i;
        i++;
    }
    return 0;
}
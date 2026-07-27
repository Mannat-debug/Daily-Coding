#include <iostream>
using namespace std;

void update(int &a) {
    a = a + 1;
    cout << a;
}

int main() {
    int x = 1;
    update(x);
    cout << x;
    return 0;
}
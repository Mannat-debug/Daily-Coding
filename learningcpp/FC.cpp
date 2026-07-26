#include <iostream>
using namespace std;

int main() {
    int min, max, step;
    cin >> min >> max >> step;

    while (min < max) {
        cout << min << " ";
        double c = 5.0/9*(min-32);
        cout << static_cast<int>(c) << '\n';
        min += step;
    }
    return 0;
}
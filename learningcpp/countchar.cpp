#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char ch;
    cin.get(ch);

    while (ch!='$') {
        count ++;
        cin.get(ch);
    }
    cout << count;
    return 0;
}
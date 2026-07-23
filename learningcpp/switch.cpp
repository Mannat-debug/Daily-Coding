#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    switch(ch) {
        case 'n':
        case 'N':
                cout << "North" << endl;
                break;
        case 's':
        case 'S':
                cout << "South" << endl;
                break;
        case 'e':
        case 'E':
                cout << "East" << endl;
                break;
        case 'w':
        case 'W':
                cout << "West" << endl;
                break;
        default: 
                cout << "Invalid Input" << endl;
    }
    return 0;
}
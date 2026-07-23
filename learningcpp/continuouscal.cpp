#include <iostream>
using namespace std;

int main() {
    char ch;
    int a, b;
    int result;
    while (true) {
        cin >> ch;

        if (ch == 'x' || ch == 'X') {
            break;
        }

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {
            cin >> a >> b;
            switch(ch) {
                case '+': 
                        cout <<  a + b << endl;
                        break;
                case '-':
                        cout <<  a - b << endl;
                        break;
                case '*':
                        cout <<  a * b << endl;
                        break;
                case '/':
                        cout <<  a / b << endl;
                        break;
                case '%':
                        cout <<  a % b << endl;
                        break;
            }
        }
        else {
            cout << "Invalid operation. Try again." << endl;
        }
    }
    cout << result;
    return 0;
}

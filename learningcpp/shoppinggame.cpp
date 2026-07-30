#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int turn = 1;

        while (true) {
            if (turn % 2 == 1) { // Aayush's turn
                if (M < turn) {
                    cout << "Harshit\n";
                    break;
                }
                M -= turn;
            } else { // Harshit's turn
                if (N < turn) {
                    cout << "Aayush\n";
                    break;
                }
                N -= turn;
            }
            turn++;
        }
    }

    return 0;
}
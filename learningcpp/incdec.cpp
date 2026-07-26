#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int previous, current;

    bool increasingPart = false;
    bool valid = true;

    for (int i = 1; i < N; i++) {
            cin >> current;

            if (!increasingPart) {
                if (current < previous) {
                    //still in decreasing part
                }
                else if (current > previous) {
                    increasingPart = true; // now increasing part started
                }
                else {
                    valid = false; // equal values are not allowed
                }   
            }
    
            else {
                if (current <= previous) {
                    valid = false; // increasing part must be strictly increasing
                }
            }

            previous = current;
        }
    cout << (valid ? "true" : "false");
    return 0;
    }

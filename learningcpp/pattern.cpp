#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    int row;
    int num;
    for (row=1; row<=n; row++) {
        //1. print n-row times space
        for (int i=1; i<=n-row; i++) {
            cout<< " ";
        }
        //2. print 2*row - 1 times number
        for (num=1; num<=2*row-1; num++) {
            cout<< num;
        }
        //3. go to next line
        cout<< endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int db;

int getans(int dec) {
    int final = 0;
    int position = 1;
    int temp = dec;
    while (temp > 0) {
        int rem = temp%db;
        final += rem*pow(10, position - 1);
        temp/=db;
        position++;
    }
    return final;
}
int main() {
    int sb;
    string sn;
    cin >> sb >> db >> sn;
    
    int dec = stoi(sn, 0, sb);
    int final = getans(dec);
    cout << final;
    return 0;
}
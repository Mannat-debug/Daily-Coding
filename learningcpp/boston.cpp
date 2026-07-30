#include <iostream>
#include <cmath>
using namespace std;

int sumdigits(int N) {
    if (N == 0) {
        return 0;
    }
    int sum = 0;
    while (N>0) {
        int digit = N%10;
        sum += digit;
        N/=10;
    }
    return sum;
}

bool isPrime(int n) {

    if (n < 2) {
    return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int primfactorssum(int N){
    int psum = 0;
    int temp = N;
    for (int i = 2; i <= temp; i++) {
        while (temp%i==0) {
            psum += sumdigits(i);
            temp/=i;
        }
    }
    return psum;
}

bool checkboston(int N) {
    int sum = sumdigits(N);
    int psum = primfactorssum(N);
    return sum == psum;
}

int main() {
    int N;
    cin >> N;
    cout << checkboston(N);
    return 0;
}
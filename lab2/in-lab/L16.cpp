#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isSpecialNumber(int n) {
    // Write your code
    int sumDigit = 0;
    int temp = n;
    while(temp) {
        sumDigit += temp % 10;
        temp /= 10;
    }
    return checkPrime(n) && checkPrime(sumDigit);
}


int main() {
    int n;
    cin >> n;
    cout << isSpecialNumber(n);
    return 0;
}
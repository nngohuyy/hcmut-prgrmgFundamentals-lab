#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkPrimeNumber(int n) {
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int primeColumns(int arr[][1000], int row, int col) {
    int count = 0;
    int sum = 0;
    for (int c = 0; c < col; c++) {
        for (int r = 0; r < row; r++) {
            sum += arr[r][c];
        }
        if (checkPrimeNumber(sum)) {
            count++;
        }
        sum = 0;
    }
    return count;
}

int main() {
    int arr[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};
    cout << primeColumns(arr,2,4);
    return 0;
}
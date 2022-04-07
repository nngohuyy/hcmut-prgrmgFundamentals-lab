#include <iostream>
using namespace std;

int* zeros(int n) {
    // TODO
    // if (n <= 0) {
    //     return nullptr;
    // }
    // else {
    //     int* arr = new int(n);
    //     for (int i = 0; i < n; i++) {
    //         arr[i] = 0;
    //     }
    //     return arr;
    // }
    if (n <= 0) return nullptr;
    int* arr = new int[n]();
    return arr;
}

int main() {
    int n;
    cin >> n;
    cout << zeros(n);
    return 0;
}